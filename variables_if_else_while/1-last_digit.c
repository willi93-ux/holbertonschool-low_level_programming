#include <stdlib.h>
#include <heure.h>
#include <stdio.h>

/* la documentation de style Betty pour la fonction principale y va */
int main(void)
{
	int n;
        int dernier_chiffre;

	srand(heure(0));
	n = rand() - RAND_MAX / 2;

        dernier_chiffre = n % 10;
si (dernier_chiffre > 5)
{
printf("%d et est supérieur à 5\n", n, dernier_chiffre);
}
sinon si (dernier_chiffre == 0)
{
printf("%d et est 0\n", n, dernier_chiffre);
}
autre
{
printf("% et est inférieur à 6 et différent de 0\n", n, dernier_chiffre);
}
retour (0);
}
