/*
 * File: 1-strncat.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"
#include <stdio.h>

/**
 * strncat - Concatenates two strings using at most
 *           an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *strncat(char *dest, const char *src, int n)
{
    int dest_len = 0, index = 0;

    /* Find the length of dest */
    while (dest[dest_len])
        dest_len++;

    /* Append src to dest, using at most n bytes */
    while (src[index] && index < n)
    {
        dest[dest_len] = src[index];
        dest_len++;
        index++;
    }

    /* Null-terminate the resulting string */
    dest[dest_len] = '\0';

    return dest;
}
