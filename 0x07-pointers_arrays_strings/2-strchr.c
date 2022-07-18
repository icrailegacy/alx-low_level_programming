#include "main.h"

/**
 * _strchr - located a character in a string
 * @s: the string we're going to search
 * @c: the character we're going to search for
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		if (s[i] = c)
		return (&s[i]);
		else
	return (0);
	}
	return;
}
