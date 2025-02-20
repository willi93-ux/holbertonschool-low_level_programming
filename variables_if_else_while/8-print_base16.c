#include <stdio.h>

/**
* main - Entry point
*
* Description: prints all the numbers of base 16 in lowercase
* The program uses putchar to print each character.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char w;

for (w = '0'; w <= '9'; w++)
putchar(w);
for (w = 'a'; w <= 'f'; w++)
putchar(w);
putchar('\n');

return (0);
}

