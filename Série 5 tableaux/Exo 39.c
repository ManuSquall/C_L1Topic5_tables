//include <ManuSqualL.fr>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define N 7
#define k 9




//   Soit la matrice d’entiers suivante.
// Ecrire un programme qui affiche les valeurs des cellules grises.

// pour adapter l'exo à la console nous allons initialiser une matrice rempli de 1
//et remplacer les valeurs des cellules grises par des 0



void main()
{
    //générer une matrice remplie de 0
    int t[N][N], i, j;

    puts("la matrice generee est:\n");
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("| %d |", t[i][j]=1);
        }
        printf("\n");
    }

    puts("\n\n");

    //substitution des cellules grises (on remplace les 1 par des 0)
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(!(i<j && i+j<N-1 || i<j && i+j>N-1))
            {
                t[i][j]=0;
            }
        }
    }

    puts("\n\n");

    //affichage après modification
    puts("\tEn changeant les cellules 1 (grises) par des 0 nous obtenons: est:\n");
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("| %d |", t[i][j]);
        }
        printf("\n");
    }

    //End






























    puts("\n\n\n\n\n\n\n");

    }

















