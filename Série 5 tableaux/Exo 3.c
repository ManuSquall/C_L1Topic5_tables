//include <nuMa.SqualL.h>
#include <stdio.h>
#include <stdlib.h>
#define L 9

            //Ecrire un programme qui permet de remplir un tableau de 9 notes, dont on fait ensuite saisir
            //les valeurs par l’utilisateur. Le programme affiche les valeurs du tableau.


void main()
{

    float T[L]={0}, n;
    int i;

    //on va faire saisir les valeurs du tableau par l'utilisateur
    for(i=0; i<L; i++)
    {
        do
        {
            puts("Saisissez une note valide svp");
            scanf("%f", &n);
        }while(n<0 || n>20);
        // là on les stocke directement dans la cellule correspondante
        T[i]=n;
    }

    printf("\n\n\n");

    // enfin on les affiche (rien de plus facile en mm temps ^^)
    for(i=0; i<L; i++)
    {
        printf("%0.2f | ", T[i]);
    }

    // j'ai essayé d'évoluer un peu en commencaant un peu avec les puts et les code format limité (%0.3f)


















    printf("\n\n\n\n\n\n\n");
}


















