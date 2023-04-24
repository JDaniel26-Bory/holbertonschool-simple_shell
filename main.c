#include "shell.h"
#define BUFFER_SIZE 1024
int main(void)
{
    char *buffer = NULL;
    size_t buffer_size = 0;
    ssize_t chars_read;
	  pid_t pid;
				int status;
    while (1) {
        printf("simple_shell~$ ");
        chars_read = getline(&buffer, &buffer_size, stdin);
        if (chars_read == -1) {
            if (feof(stdin)) {
                printf("\n");
            }
            break;
        }
        buffer[strcspn(buffer, "\n")] = '\0';
        if (strlen(buffer) == 0 || strlen(buffer) > 20 || (((buffer[0] >= 'A') && (buffer[0] <= 'Z')) && ((buffer[0] >= 'a') && (buffer[0] <= 'z'))))
						{
            printf("Error: Código inválido\n");
            continue;
        }
        pid = fork();
        if (pid == -1) {
            perror("fork");
            exit(EXIT_FAILURE);
        } else if (pid == 0) {
            execlp(buffer, buffer, (char *)NULL);
            perror(buffer);
            exit(EXIT_FAILURE);
        } else {
            waitpid(pid, &status, 0);
        }
    }
    free(buffer);
    exit(EXIT_SUCCESS);
}
