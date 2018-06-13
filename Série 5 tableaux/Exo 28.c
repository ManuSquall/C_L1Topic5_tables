//include <ManuSqualL.fr>
#include <stdio.h>
#include <stdlib.h>
#define L 1000



    //Ecrire un programme qui permet d’inverser un tableau d’entier de N cellules déjà remplies.

void main()
{

    int T[L], i, N, a;

    //saisie du tableau de N cellules

    do{
        puts("Combien d'entiers voulez vous saisir?");
        scanf("%d", &N);
    }while(N<=0);

    puts("\n\n\n");

    for(i=0; i<N; i++)
    {
        printf("Saisissez l'entier de la cellule %d \n ", i+1);
        scanf("%d", &T[i]);
    }

    //affichage

    puts("\n\n\n");



    puts("Le tableau que vous avez saisi est: \n ");
    for(i=0; i<N; i++)
    {
        printf("%d |", T[i]);
    }

     puts("\n\n\n");


     //inversement du tableau

    for(i=0; i<(N/2); i++)
    {
        a=T[i];
        T[i]=T[(N-1)-i];
        T[(N-1)-i]=a;
    }

    //so pride of me after coding this :-D

    //affichage
    puts("\n\n\n");

     puts("Le tableau inverse donne: \n ");
    for(i=0; i<N; i++)
    {
        printf("%d |", T[i]);
    }

     puts("\n\n\n");












































    printf("\n\n\n\n\n\n\n");


}

















