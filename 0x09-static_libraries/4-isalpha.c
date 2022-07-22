#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, whether it is lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */

int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
int _isalpha(int c);
