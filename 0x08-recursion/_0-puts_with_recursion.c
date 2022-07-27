#inlcude "main.h"
#include <stdio.h>
/**
*
*/

void _puts_recursion(char *s)
{
if (strlen(s) == 0)
{
return 0;
}
return s[0];
return _puts_recursion s + 1;

}
