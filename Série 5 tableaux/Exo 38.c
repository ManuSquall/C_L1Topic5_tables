//include <ManuSqualL.fr>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define N 7
#define k 9




//    Soit la matrice suivante :
//    Ecrire un programme qui permet d’afficher :
//    - La somme des valeurs des cellules grises, (cellules 0 et 1)
//    - Le produit des valeurs des cellules noires, (cellules 2 et 3)
//    - La moyenne des valeurs des cellules blanches. (cellules 4 et 5)

// pour adopter l'exercice à la console nous allons générer une matrice aleatoirement



void main()
{


    int t[N][N], i, j;

    puts("\n\n");
    srand(time(NULL));

    //remplissage des cellules grises par des 0 et des 1
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(i==j || i+j==N-1 ||(i<j && i+j<N-1) )
            {
                t[i][j]= (rand() % 1);
            }


        }
    }

    //remplissage des cellules noires par des 2 et des 3
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(i>j && i+j<N-1 || i+j>N-1 && i<j)
            {
                t[i][j]= (rand() % (3-2+1)) + 2;
            }


        }
    }





    //remplissage des cellules blanches par des 4 et des 5
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(i>j && (i+j>N-1) )
            {
                t[i][j]= (rand() % (5-4+1)) + 4;
            }


        }
    }



    puts("\n\n\n\n");
    puts("La matrice generee est:\n");
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%d | ", t[i][j]);

        }
        printf("\n");
    }





    //    - La somme des valeurs des cellules grises, (cellules 0 et 1)
    int somg=0;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(i==j || i+j==N-1 ||(i<j && i+j<N-1) )
            {
                somg=somg+t[i][j];
            }


        }
    }



    //    - Le produit des valeurs des cellules noires, (cellules 2 et 3)
    int prodn=1;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(i>j && i+j<N-1 || i+j>N-1 && i<j)
            {
                prodn=prodn*t[i][j];
            }


        }
    }


    //    - La moyenne des valeurs des cellules blanches. (cellules 4 et 5)
    int somb=0;
    float moyb;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(i>j && (i+j>N-1) )
            {
                somb=somb+t[i][j];
            }


        }
    }
    moyb=somb/k;

    puts("\n\n\n");
    printf("\tLa somme des valeurs des cellules grises (cellules 0 et/ou 1) est: \t %d", somg);
    puts("\n\n");
    printf("\t\tLa produit des valeurs des cellules noires (cellules 2 et/ou 3) est: \t %d", prodn);
    puts("\n\n");
    printf("\t\t\tLa moyenne des valeurs des cellules blanches (cellules 4 et/ou 5) est: \t %0.2f", moyb);
    puts("\n\n");







//end






















    puts("\n\n\n\n\n\n\n");

    }

















