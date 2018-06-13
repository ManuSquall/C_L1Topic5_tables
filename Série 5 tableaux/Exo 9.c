//include <nuMa.SqualL.h>
#include <stdio.h>
#include <stdlib.h>
#define L 1000


    //Ecrire un programme qui permet de remplir un tableau de N valeurs entières. Le programme
    //affiche toutes les valeurs saisies ainsi que le nombre de présence de X dans le tableau.
    //La valeur de X est saisie par l’utilisateur.

void main()
{
    //copier coller une partie de l'exo 8 ^^


    // on initie le tableau avec une valeur plus ou  moins grande comme l'homme est flemmard 1000 devrait suffir
    // personne va taper 1000 notes d'affilé j'pense
    int T[L]={0}, n, N, i;



    // là on récupère les notes  après lui avoir demandé le nombre de note qu'il souhaite taper
    do
    {
        puts("Combien d'entiers souhaitez vous saisir ?");
        scanf("%d", &N);
    }while(N<=0);


    printf("\nSaisissez vos %d entiers\n", N);
    for(i=0; i<N; i++)
    {
        printf("\nSaisissez le %d eme entier valide svp\n\n", i+1);
        scanf("%d", &n);
        T[i]=n;

    }


    puts("\n");


    //on affiche les valeurs du tableau, une boucle, la routine^^

    printf("les %d entiers que vous avez saisis sont:\n", N);
    puts("\n");
    for(i=0; i<N; i++)
    {
        printf("%d | ", T[i]);
    }




    // on va demander X
    int x;
    puts("\n\n");
    printf("Quel est l'entier dont vous voulez la frequence?\n");
    scanf("%d", &x);
    int freq=0;
    for(i=0;i<N;i++)
    {
        if(T[i]==x)
        {
            freq++;
        }
    }
    printf("\n\n\t\tDans ce tableau %d apparait %d fois", x, freq);
























    printf("\n\n\n\n\n\n\n");


}

















