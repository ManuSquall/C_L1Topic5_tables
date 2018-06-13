//include <ManuSqualL.fr>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define L 1000
#define C 21



    //Ecrire un programme qui permet de remplir un tableau N de mots. Chaque mot pourra contenir 20 caractères.
    //Le programme affiche les mots du tableau puis détermine et affiche le nombre de mot contenant la lettre
    //« M » (la casse n’est pas tenue en compte).

typedef struct
{
    char t[C];
}tab;


void main()
{
    tab mots[L];
    int i, cptm, cptM, cpt, N, m, M;

    //on demande le nombre de mots à saisir et pour i allant de 1 à N, on les stocke dans une chaine d'un tableau
    do
    {
        puts("Combien de mots voulez vous saisir?");
        scanf("%d", &N);
    }while(N<=0);
    fflush(stdin);
    for(i=0; i<N; i++)
    {
        printf("\n Entrer le mot %d \n", i+1);
        gets(mots[i].t);
    }
    puts("\n\n\n\n");

    //affichage des mots du tableau
    printf("les %d mots saisis sont:\n", N);
    for(i=0; i<N; i++)
    {
        puts(mots[i].t);
    }
    puts("\n\n\n\n");

    //dertemination du nombre de mot commencant pas "M" ou "m"
    cptM=0;
    cptm=0;
    cpt=0;
    for(i=0; i<N; i++)
    {
        M= strchr(mots[i].t,'M');
        m= strchr(mots[i].t,'m');
        if(/*strchr(mots[i].t,'M')*/M!=NULL || /*strchr(mots[i].t,'m')*/m!=NULL)
        {
            cpt=cpt+1;
        }
    }
    printf("\t\t\tIl y a %d mots commencant par M ou m", cpt);
































    puts("\n\n\n\n\n\n\n");


}

















