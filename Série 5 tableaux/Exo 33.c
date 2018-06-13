//include <ManuSqualL.fr>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define L 1000
#define C 200



    //Ecrire un programme qui permet de remplir un tableau N de phrases. Chaque phrase pourra
    //contenir 200 caractères. Le programme affiche les phrases ne commençant pas par une
    //majuscule.

void main()
{
    typedef struct
    {
        char t[C]
    }tab;
    tab ph[L];

    int i,N;
    do
    {
        puts("combien de phrases voulez vous saisir?");
        scanf("%d", &N);
    }while(N<=0);
    fflush(stdin);
    for(i=0; i<N; i++)
    {
        printf("\nEntrez la phrase %d \n", i+1);
        gets(ph[i].t);
    }
    puts("\n\n\n\n");

    //determination des phrases ne commencant pas par une majuscule
    puts("les phrases ne debutant pas avec une majuscule sont:\n");
     for(i=0; i<N; i++)
    {
        if(ph[i].t[0]<'A' || ph[i].t[0]>'Z')
        {
            puts(ph[i].t);
        }
    }































    puts("\n\n\n\n\n\n\n");


}

















