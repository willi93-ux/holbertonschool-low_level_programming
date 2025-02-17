#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Détermine le dernier chiffre d'un nombre et affiche un message.
 *
 * Return: 0 (Succès)
 */
int main(void)
{
	int n;
	int dernier_chiffre;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dernier_chiffre = n % 10;

	if (dernier_chiffre > 5)
	{
		printf("Le dernier chiffre de %d est %d et est supérieur à 5\n", n, dernier_chiffre);
	}
	else if (dernier_chiffre == 0)
	{
		printf("Le dernier chiffre de %d est %d et est 0\n", n, dernier_chiffre);
	}
	else
	{
		printf("Le dernier chiffre de %d est %d et est inférieur à 6 et différent de 0\n", n, dernier_chiffre);
	}

	return (0);
}
