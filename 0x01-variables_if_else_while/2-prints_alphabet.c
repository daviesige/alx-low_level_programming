#include <stdio.h>

/**
* main - Entry point
*Description: program that prints alphabets in lowercase, then a new line
*
*Return: Always 0 (Success/correct)
*/

int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
