#include "shell.h"


int simple_shell(void)
{
    char *buffer = NULL;
    size_t buffer_size = 0;
    ssize_t c;
    pid_t pid;
    int status;

    while (1)
    {
        printf("$ ");
        c = getline(&buffer, &buffer_size, stdin);
        if (c == -1)
        {
            if (feof(stdin))
                putchar('\n');
            break;
        }
        buffer[strcspn(buffer, "\n")] = '\0';

        pid = fork();
        if (pid == -1)
        {
            perror("fork");
            exit(EXIT_FAILURE);
        }
        else if (pid == 0)
        {
            char **args = split_line(buffer);
            if (args == NULL)
            {
                fprintf(stderr, "Failed to tokenize command\n");
                exit(EXIT_FAILURE);
            }

            execvp(args[0], args);
            perror(args[0]);
            exit(EXIT_FAILURE);
        }
        else
        {
            waitpid(pid, &status, 0);
        }
    }

    free(buffer);
    exit(EXIT_SUCCESS);
}
