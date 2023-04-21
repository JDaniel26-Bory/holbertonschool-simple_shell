#include "shell.h"

/**
 * _strlen - Function that returns the length of a string.
 *
 * @s: Pointer to a string.
 *
 * Description: Takes a pointer to a character of a string and count
 * the characters until it reach '\0' character.
 *
 * Return: The count of the characters from a given string.
 */

int _strlen(const char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
