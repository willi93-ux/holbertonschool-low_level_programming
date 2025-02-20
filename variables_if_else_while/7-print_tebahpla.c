#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints the lowercase alphabet in reverse, followed by a new line.
* The program uses putchar to print each character.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char w;
for (w = 'z'; w >= 'a'; w--)
putchar(w);
putchar('\n');
return (0);
}

