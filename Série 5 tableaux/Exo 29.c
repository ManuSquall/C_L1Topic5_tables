//include <ManuSqualL.fr>
#include <stdio.h>
#include <stdlib.h>
#define L 1000



    //Ecrire un programme qui permet d�initialiser deux tableaux de caract�res, le programme affiche
    //les caract�res de diff�rence.

void main()
{

    char T1[L], T2[L], T3[L], T4[L];
    int N1, N2, i, nbr1, nbr2, cpt, j;





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



    //pour afficher les caracteres de diff�rence je compte afficher dans un premier temps les caracteres qui sont
    //dans le tableau 1 et pas dans le tableau 2 puis inversement.

    //je vais utiliser la logique de l'exo 23
    //il y aura donc un tableau pour stocker les uniques caracteres de T1 et un autre pour les uniques caracteres de T2

    //on va d'abord prendre un element du T1 avec une boucle et parcourir avec lui chaque element de T2 pour les
    //comparer
    //s'il se ressemble on incr�mente un compteur sinon on ne le fait pas
    //si par la suite le compteur est �gale zero (0) cel� veut dire qu'il n'est pr�sent que dans T1
    //donc on va le stocker dans un troisieme tableau qu'on affichera par la suite




     nbr1=0;
    // nbr est un compteur qui va nous permettre :
    //*de savoir le nombre de caract�res qu'il n'ont pas en commun
    //de pouvoir assigner ces caract�res aux cellules correspondantes dans T3

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
        if(cpt==0)
        {
            T3[nbr1]=T1[i];
            nbr1++;
        }

    }




    //on r�p�te le mm processus pour T2 et nous le stockons dans T4

    //utiliser les mm variables durant le processus ne g�ne pas puisque qu'on les r�initialise � 0


     nbr2=0;

    for(i=0; i<N2; i++)
    {
        int cpt=0;
        for(j=0; j<N1; j++)
        {
            if(T2[i]==T1[j])
            {
                cpt++;
            }

        }
        if(cpt==0)
        {
            T4[nbr2]=T2[i];
            nbr2++;
        }

    }


    //l� on affiche les caract�res de diff�rence
    puts("\n\n\n");




    if(nbr1>0)
    {
        printf("\t\tLes caracteres presents dans le tableau 1 et pas dans le tableau 2\n\n\t\t\tsont au nombre de %d et sont:\n \n", nbr1);

        for(i=0; i<nbr1; i++)
        {
            printf("\t");
            printf("%c |", T3[i]);
        }
    }
    else
    {
        puts("\t il n'y a aucun caractere de T1 ne se trouvant pas dans T2\n\n");
    }


    puts("\n\n\n\n\n");

    if(nbr2>0)
    {
        printf("\t\tLes caracteres presents dans le tableau 2 et pas dans le tableau 1\n\n\t\t\tsont au nombre de %d et sont:\n\n ", nbr2);

        for(i=0; i<nbr2; i++)
        {
            printf("\t");
            printf("%c |", T4[i]);
        }
    }
    else
    {
        puts("\t il n'y a aucun caractere de T2 ne se trouvant pas dans T1\n\n");
    }








































    printf("\n\n\n\n\n\n\n");


}

















