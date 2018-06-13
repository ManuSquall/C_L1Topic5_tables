//include <ManuSqualL.fr>
#include <stdio.h>
#include <stdlib.h>
#define L 1000



    //Ecrire un programme qui, à partir d’un tableau d’entier de N cellules déjà remplies, affiche VRAI
    //si les éléments du tableau sont consécutifs sinon FAUX.

void main()
{

    int T[L], i, N, cpt=0;

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




    //verification de la croissance des nombres
    for(i=0; i<N; i++)
    {
        if(T[i]>T[i+1])
        {
            cpt=cpt+1;
        }
    }
     puts("\n\n\n");


     if(cpt==0)
     {
         printf("\t\t\t le tableau que vous avez saisi est croissant!");
     }
     else
     {
         printf("\t\t\t le tableau que vous avez saisi n'est pas croissant!");
     }










































    printf("\n\n\n\n\n\n\n");


}

















