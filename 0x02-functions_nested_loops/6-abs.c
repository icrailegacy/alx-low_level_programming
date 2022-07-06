#include "main.h"

/**
 *_abs - Computes the absolute value of an integer
 * @r: input integer
 * Return: Absolut value of number r
 */

int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
