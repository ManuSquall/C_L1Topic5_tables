//include <ManuSqualL.fr>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 75
#define M 50



    //Soit une matrice d’entier de N = 75 lignes et M =50 colonnes. Ecrire un sous-programme
    //qui permet de calculer la moyenne des valeurs de chaque colonne de la matrice.

void main()
{
    int t[N][M], i, j, som;
    float  tm[M];


    //remplissage de la matrice
    puts("saisissez les elements de la matrice\n");
    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            printf("\nSaisissez la valeur de la cellule %d de la ligne %d \n", j+1, i+1);
            scanf("%d", &t[i][j]);
        }
    }

    for(j=0; j<M; j++)
    {
        som=0;
        for(i=0; i<N; i++)
        {
            som=som+t[i][j];
        }
        tm[j]=(som/M);
    }


    puts("\n\n\n\n");
    puts("La matrice saisie est:\n");
    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            printf("%d | ", t[i][j]);
        }
        printf("\n");
    }


    puts("\n\n\n\n");
    puts("La moyenne des colonnes est:\n");
    for(i=0; i<M; i++)
    {
            printf("%f |", tm[i]);
    }
































    puts("\n\n\n\n\n\n\n");


}

















