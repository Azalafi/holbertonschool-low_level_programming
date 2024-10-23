#include <stdio.h>

/**
 * main - Affiche l'alphabet sans q et e
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		if (lettre != 'e' && lettre != 'q')
			putchar(lettre);
	}
	putchar('\n');

	return (0);
}
