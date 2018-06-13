//include <ManuSqualL.fr>
#include <stdio.h>
#include <stdlib.h>
#define L 1000



    //Ecrire un programme qui permet de remplir un tableau de N entiers. Le programme fait un
    //décalage cyclique d’un rang vers la gauche. Le programme affiche le tableau avant et après
    //décalage.

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

    for(i=0; i<N; i++)
    {
        if(i==0)
        {
            a=T[i];
            T[i]=T[i+1];

        }else if(i==N-1)
        {
            T[N-1]=a;
        }
        else{
            T[i]=T[i+1];
        }
    }




    puts("\n\n\n");
    //affichage du tableau après décallage
    puts("\t\t\tLe tableau que vous avez saisi apres decallage vers la gauche est:");
    puts("\t\t");
    for(i=0; i<N; i++)
    {
        printf(" %d |", T[i]);
    }







































    printf("\n\n\n\n\n\n\n");


}

















