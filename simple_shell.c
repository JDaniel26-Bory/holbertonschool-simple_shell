#include "main.h"

int main()
{
	while (1)
	{
		char *string = NULL;
		size_t line_len = 0;
		size_t chars_read;
		pid_t pid;
		int status;

		string = malloc(120);
		printf("Simple_shell~$");
		line_len = getline(&string, &line_len, stdin);
		if (*string == -1)
			break;
		pid = fork();
        if (pid == -1) {
            perror("fork");
            exit(EXIT_FAILURE);
        } else if (pid == 0) {
            char *args[] = { string, NULL };
            execve(string, args, NULL);
            perror(string);
            exit(EXIT_FAILURE);
        } else {
            waitpid(pid, &status, 0);
        }
    }
    free(stdin);
    exit(EXIT_SUCCESS);
}
