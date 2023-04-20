#include "shell.h"

/**
 * tokenizer - tokenizes a string according to a delimiter
 * @buffer: string to tokenize
 * @delimiter: delimiter to use for tokenization
 *
 * Return: array of tokens
 */
char **tokenizer(char *buffer, const char *delimiter)
{
char **tokens = malloc(sizeof(char *));
char *token = strtok(buffer, delimiter);
int i = 0;
    if (!buffer || !delimiter)
        return NULL;
    if (!tokens)
        return NULL;
    while (token != NULL)
    {
        tokens[i++] = strdup(token);
        tokens = realloc(tokens, sizeof(char *) * (i + 1));
        if (!tokens)
            return NULL;
        token = strtok(NULL, delimiter);
    }
    tokens[i] = NULL;
    return tokens;
}
