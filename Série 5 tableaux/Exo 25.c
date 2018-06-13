//include <ManuSqualL.fr>
#include <stdio.h>
#include <stdlib.h>
#define L 1000



    //Même exercice que précédemment mais le décalage se fait à droite.

void main()
{


    int T[L], i, N, a;



    //on demande N
    do
    {
        puts("Combien d'entiers voulez vous saisir?");
        scanf("%d", &N);
    }while(N<1);

    puts("\n\n\n");

    //un boucle pour saisir les N entier
    for(i=0; i<N; i++)
    {
        printf("\nveuillez saisir le %d eme entier svp\n", i+1);
        scanf("%d", &T[i]);
    }


    puts("\n\n\n");

    //affichage du tableau avant décallage
    puts("\t\t\tLe tableau que vous avez saisi avant decallage est:");
    puts("\t\t");
    for(i=0; i<N; i++)
    {
        printf(" %d |", T[i]);
    }





    //decallage de 1 rang vers la gauche

    for(i=N; i>-1; i--)
    {
        if(i==N)
        {
            a=T[i-1];
            T[i]=T[i-1];

        }else if(i==0)
        {
            T[0]=a;
        }
        else{
            T[i]=T[i-1];
        }
    }




    puts("\n\n\n");
    //affichage du tableau après décallage
    puts("\t\t\tLe tableau que vous avez saisi apres decallage vers la droite est:");
    puts("\t\t");
    for(i=0; i<N; i++)
    {
        printf(" %d |", T[i]);
    }







































    printf("\n\n\n\n\n\n\n");


}

















