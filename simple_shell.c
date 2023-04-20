#include "shell.h"
#include <ctype.h>

/**
 * cleanup_buffer - function for free the memory
 * @buffer: double pointer for the memory
 *
 * Return: 0
 */

void cleanup_buffer(char **buffer)
{
if (*buffer != NULL)
{
free(*buffer);
*buffer = NULL;
}
}
/**
 * simple_shell - function
 *@void: is a argument
 *
 * Return: 0
 */

int simple_shell(void)
{
char *buffer = NULL;
size_t buffer_size = 0;
ssize_t c;
pid_t pid;
int status;
while (1)
{
putchar('$');
c = getline(&buffer, &buffer_size, stdin);
if (c == -1)
{
if (feof(stdin))
{
putchar('\n');
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
execlp(buffer, buffer, (char *)NULL);
perror(buffer);
exit(EXIT_FAILURE);
}
else
{
waitpid(pid, &status, 0);
}
cleanup_buffer(&buffer);
}
cleanup_buffer(&buffer);
exit(EXIT_SUCCESS);
}
