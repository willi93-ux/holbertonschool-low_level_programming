#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase followed by a new line.
 * The program uses putchar to print each character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char w;

	for (w = 'a'; w <= 'z'; w++)
		putchar(w);
  for (letter = 'A'; letter <= 'Z'; letter++)
	putchar('\n');

	return (0);
}
