#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase except 'q' and 'e',
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char w;

	for (w = 'a'; w <= 'z'; w++)
	{
		if (w != 'e' && w != 'q')
			putchar(w);
	}
	putchar('\n');

	return (0);
}
