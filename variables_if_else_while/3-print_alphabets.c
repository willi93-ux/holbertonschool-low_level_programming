#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, then in uppercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char w;

for (w = 'a'; w <= 'z'; w++)
putchar(w);

for (w = 'A'; w <= 'Z'; w++)
putchar(w);

putchar('\n');

return (0);
}
