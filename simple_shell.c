#include "shell.h"
#include <ctype.h>

#define BUFFER_SIZE 1024

int simple_shell(void)
{
    char *buffer = NULL;
    size_t buffer_size = 0;
    ssize_t chars_read;
    pid_t pid;

    while (1) {
        printf("$ ");
        chars_read = getline(&buffer, &buffer_size, stdin);
        if (chars_read == -1) {
            if (feof(stdin)) {
                printf("\n");
            }
            break;
        }
        buffer[strcspn(buffer, "\n")] = '\0';

        pid = fork();
        if (pid == -1) {
            perror("fork");
            exit(EXIT_FAILURE);
        } else if (pid == 0) {
            execlp(buffer, buffer, (char *)NULL);
            perror(buffer);
            exit(EXIT_FAILURE);
        } else {
            waitpid(pid, NULL, 0);
        }
    }

    free(buffer);
    exit(EXIT_SUCCESS);
}
