#include "main.h"

/**
*Description - Return 1 if c is uppercase or lowercase letter

*@c: the int to print
*Return: Always 0
*/

int _isalpha(int c)

{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}

else
{
return (0);
}
}
