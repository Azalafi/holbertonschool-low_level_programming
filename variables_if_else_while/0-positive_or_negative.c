#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;

    srand(time(0)); // Initialise le générateur de nombres aléatoires
    n = rand() % 201 - 100; // Génère un nombre entre -100 et 100

    printf("%d ", n);
    if (n > 0)
    {
        printf("est positif.\n");
    }
    else if (n == 0)
    {
        printf("est nul.\n");
    }
    else
    {
        printf("est négatif.\n");
    }

    return 0;
}

