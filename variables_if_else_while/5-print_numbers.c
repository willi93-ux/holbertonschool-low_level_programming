#include <stdio.h>
/**
 * print_numbers - Prints the numbers from 0 to 9 followed by a new line
 * main - Entry point
 * Description: This function uses a loop to iterate through
 * the numbers from 0 to 9 and prints them to the screen.
 * It then adds a new line.
 *
 * Return: Does not return anything (void)
 */

int main(void)
{
char numbers;
for (numbers = '0'; numbers <= '9'; numbers++)
{
printf("%c", numbers);
}
printf("\n");
return (0);
}


















