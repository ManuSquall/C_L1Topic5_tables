//include <ManuSqualL.fr>
#include <stdio.h>
#include <stdlib.h>
#define L 1000



    //Même principe que l’exercice précédent mais le décalage se fait de K rang vers la gauche.

void main()
{
    //dans l'exo 24 et 25 on fait un decallage d'un rang vers la droite ou la gauche, ici on doit le faire mais kfois
    //c'est donc une boucle qu'on va ajouter aux codes précédent



    int T[L], i, N, a, k, j;



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

    do{
        puts("De combien de rangs voulez vous decallez vers la gauche?");
        scanf("%d", &k);
    }while(k<0);



    puts("\n\n\n");

    //affichage du tableau avant décallage
    puts("\t\t\tLe tableau que vous avez saisi avant decallage est:");
    puts("\t\t");
    for(i=0; i<N; i++)
    {
        printf(" %d |", T[i]);
    }





    //decallage de k rang vers la gauche

    for(j=0; j<k; j++)
    {
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

















