#include "shell.h"


/**
 * tokenizer - Toma una cadena para tokenizarla según un delimitador.
 *
 * @buffer: La cadena a tokenizar.
 * @delimiter: El delimitador para crear los tokens.
 *
 * Return: Un puntero a un arreglo de tokens.
 */
char **tokenizer(char *buffer, const char *delimiter)
{
    int i = 0;
    char *tokens_count = NULL, *tokens = NULL, *ptr = NULL, **ar = NULL;

    if (!(buffer) || !(delimiter))
        return (NULL);

    tokens_count = strdup(buffer);
    tokens = strdup(buffer);

    if (!(tokens_count) || !(tokens))
        return (NULL);

    ptr = strtok(tokens_count, delimiter);
    if (ptr == NULL)
        return (NULL);

    for (i = 0; ptr != NULL; i++)
    {
        ptr = strtok(NULL, delimiter);
    }

    ar = malloc(sizeof(char *) * (i + 1));
    if (ar == NULL)
        return (NULL);

    ptr = strtok(tokens, delimiter);
    if (ptr == NULL)
        return (NULL);

    for (i = 0; ptr != NULL; i++)
    {
        ar[i] = strdup(ptr);
        ptr = strtok(NULL, delimiter);
    }

    ar[i] = NULL;
    free(tokens_count);
    free(tokens);
    return (ar);
}

/**
 * split_line - Divide una línea de comando en argumentos.
 *
 * @line: La línea de comando a dividir.
 *
 * Return: Un arreglo de punteros a cadenas que representan los argumentos.
 */
char **split_line(char *line)
{
    return tokenizer(line, " \t\r\n\a");
}
