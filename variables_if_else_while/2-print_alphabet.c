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
    putchar('\n');

    return (0);
}





