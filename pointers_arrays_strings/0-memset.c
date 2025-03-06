#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the constant byte used to fill the memory
 * @n: the number of bytes to be filled
 * 
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
    
    for (unsigned int i = 0; i < n; i++)
    {
        s[i] = b;
    }

    
    return (s);
}
