//include <ManuSqualL.fr>
#include <stdio.h>
#include <stdlib.h>
#define L 1000



    //Ecrire un programme qui permet d’initialiser deux tableaux de caractères, le programme affiche
    //les caractères qui sont dans le premier tableau et qui ne sont pas présents dans le second.

void main()
{
    char T1[L], T2[L], T3[L], n;


    int N1, N2, i, j, nbr;

    do
    {
        puts("Combien de caracteres voulez vous taper dans le premier tableau?");
        scanf("%d", &N1);
        printf("\n\n\n\n");
    }while(N1<=0);

    printf("\nSaisissez vos %d caracteres\n", N1);

    for(i=0; i<N1; i++)
    {
        fflush(stdin);
        printf("\nSaisissez le %d eme caractere svp\n\n", i+1);
        scanf("%c", &n);
        T1[i]=n;

    }


    puts("\n");


    do
    {
        puts("Combien de caracteres voulez vous taper dans le deuxieme tableau?");
        scanf("%d", &N2);
        printf("\n\n\n\n");
    }while(N2<=0);

    printf("\nSaisissez vos %d caracteres\n", N2);

    for(i=0; i<N2; i++)
    {
        fflush(stdin);
        printf("\nSaisissez le %d eme caractere svp\n\n", i+1);
        scanf("%c", &n);
        T2[i]=n;

    }

    puts("\n");

/*

    //nous allons afficher les deux tableaux pour verifier
    printf("\t\t\tLe premier tableau donne: \n ");
    printf("\t\t\t");
    for(i=0; i<N1; i++)
    {
        printf("%c |", T1[i]);
    }

    puts("\n");

    printf("\t\t\tLe deuxieme tableau donne: \n ");
    printf("\t\t\t");
    for(i=0; i<N2; i++)
    {
        printf("%c |", T2[i]);
    }

*/






    puts("\n");


    //on va d'abord prendre un element du T1 avec une boucle et parcourir avec lui chaque element de T2 pour les
    //comparer
    //s'il se ressemble on incrémente un compteur sinon on ne le fait pas
    //si par la suite le compteur est égale zero (0) celà veut dire qu'il n'est présent que dans T1
    //donc on va le stocker dans un troisieme tableau qu'on affichera par la suite





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
        if(cpt==0)
        {
            T3[nbr]=T1[i];
            nbr++;
        }

    }


    //a la fin T3 contient des caractères uniquement present dans T1




    // nous allons l'afficher

    if(nbr>0)
    {
        puts("\n\n\n\n");
        printf("\t il y a %d caractere(s) de T1 ne se trouvant pas dans T2\n\n", nbr);
        puts("\t\t\t Les caracteres se trouvant uniquement dans le premier tableau sont: \n\n");

        for(i=0; i<nbr; i++)
        {
            printf("\t\t\t");
            printf("%c |", T3[i]);
        }
    }
    else
    {
        puts("\n\n\n\n");
        puts("\t il n'y a aucun caractere de T1 ne se trouvant pas dans T2\n\n");
    }










































    printf("\n\n\n\n\n\n\n");


}

















