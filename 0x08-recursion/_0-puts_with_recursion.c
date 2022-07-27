#inlcude "main.h"
#include <stdio.h>
/**
*
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
putchar (s-1);
_print_rev_recursion(s - 2);
}
_putchar ("\n");
}
