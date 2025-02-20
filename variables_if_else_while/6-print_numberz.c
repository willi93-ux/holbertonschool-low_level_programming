#include <stdio.h>

/**
* main - Prints the numbers since 0 to 9
*
* Return: Always (Success)
*/

int main(void)
{
int digit;

for (digit = 0; digit <= 9; digit++)
{
putchar(digit + '0');
}
putchar('\n');

return (0);
}
