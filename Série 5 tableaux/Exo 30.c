//include <ManuSqualL.fr>
#include <stdio.h>
#include <stdlib.h>
#define L 1000



    //Ecrire un programme qui permet d’initialiser deux tableaux de caractères, le programme
    //affiche les caractères en commun.

void main()
{

    //on va copier coller le debut de l'exo 29 afin d'initialiser les tableaux
    char T1[L], T2[L], T3[L];
    int N1, N2, i, nbr, cpt, j;





    do{
        puts("Combien de caracteres voulez vous saisir pour le tableau 1?");
        scanf("%d", &N1);
    }while(N1<0);


    //fflush(stdin);
    for(i=0; i<N1; i++)
    {
        fflush(stdin);
        printf("\n\nSaisissez le caractere de la cellule %d du tableau 1\n", i+1);
        scanf("%c", &T1[i]);
    }


    puts("\n\n\n");

    do{
        puts("Combien de caracteres voulez vous saisir pour le tableau 2?");
        scanf("%d", &N2);
    }while(N2<0);

    //fflush(stdin);

    for(i=0; i<N2; i++)
    {
        fflush(stdin);
        printf("\n\nSaisissez le caractere de la cellule %d du tableau 2\n", i+1);
        scanf("%c", &T2[i]);
    }

    puts("\n\n\n");

    puts("Le tableau 1 que vous avez saisi est: \n ");
    for(i=0; i<N1; i++)
    {
        fflush(stdin);
        printf("%c |", T1[i]);
    }

    puts("\n\n\n");

    puts("Le tableau 2 que vous avez saisi est: \n ");
    for(i=0; i<N2; i++)
    {
        printf("%c |", T2[i]);
    }


    //à partir de là nous allons effectuer a peu près la même combine que l'exo 29
    //nous allons prendre un par un les elements de T1 et les comparer par chacun des elements de T2
    //s'ils se ressemblent alors on incrémente un compteur et on le stocke dans un troisieme tableau


    nbr=0;
    // nbr est un compteur qui va nous permettre :
    //*de savoir le nombre de caractères qu'il n'ont pas en commun
    //de pouvoir assigner ces caractères aux cellules correspondantes dans T3

    for(i=0; i<N1; i++)
    {
        int cpt=0;
        for(j=0; j<N2; j++)
        {
            if(T1[i]==T2[j])
            {
                cpt++;
            }

        }
        if(cpt!=0)
        {
            T3[nbr]=T1[i];
            nbr++;
        }

    }


    if(nbr>0)
    {
        puts("\n\n\n\n");
        printf("\t il y a %d caractere(s) commun a T1 et T2 \n\n", nbr);
        puts("\t\t\t Les caracteres se trouvant dans les deux tableaux sont: \n\n");

        for(i=0; i<nbr; i++)
        {
            printf("\t");
            printf("%c |", T3[i]);
        }
    }
    else
    {
        puts("\n\n\n\n");
        puts("\t il n'y a aucun caractere commun entre T1 et T2\n\n");
    }






































    printf("\n\n\n\n\n\n\n");


}

















