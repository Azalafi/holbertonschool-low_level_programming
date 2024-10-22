#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0)); // Initialise le générateur de nombres aléatoires
    n = rand() % 201 - 100; // Génère un nombre entre -100 et 100

    printf("%d ", n); // Affiche le nombre

    // Vérifie si le nombre est positif, nul ou négatif
    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n == 0)
    {
        printf("is zero\n");
    }
    else
    {
        printf("is negative\n");
    }

    return (0);
}

