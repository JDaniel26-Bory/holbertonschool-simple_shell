#include "main.h"
/**
 * main - is the function principal
 * @void: is a variable
 *
 * Return: 0
 */
int main(void)
{
char *buffer = NULL;
size_t buffer_size = 0;
ssize_t chars_read;
pid_t pid;
int status;
while (1)
{
printf("$ ");
chars_read = getline(&buffer, &buffer_size, stdin);
if (chars_read == -1)
{
if (errno == EINVAL)
{
perror("getline");
}
if (errno == ENOMEM)
{
perror("getline");
}
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
char *args[] = { buffer, NULL };
execve(buffer, args, NULL);
perror(buffer);
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
