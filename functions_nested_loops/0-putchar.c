#include <unistd.h>

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
    char str[] = "_putchar\n";
    write(1, str, 9);
    return (0);
}
