#include <stdio.h>

/**
* main - Entry point
*
* Description: prints all possible combinations of single-digit numbers.
* The program uses putchar to print each character.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int w;
for (w = 0; w <= 9; w++)
{
putchar(w + '0');
if (w < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
