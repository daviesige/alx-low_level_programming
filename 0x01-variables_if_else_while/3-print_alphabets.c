#include <stdio.h>

/**
*main - Entry point
*
*Description: Write a program that prints the alphabet in lowercase
*Return: Always 0 (Success/correct)
*/

int main(void)
{
char i;
char j;

for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}

for (j = 'A'; j <= 'Z'; j++)
{
putchar(j);
}

putchar('\n');
return (0);
}
