//include <nuMa.SqualL.h>
#include <stdio.h>
#include <stdlib.h>
#define L 1000


    //Ecrire un programme qui permet de remplir un tableau d’entier de N cellules. Le programme
    //affiche les valeurs du tableau puis détermine la valeur maximale ainsi que sa position
    //dans le tableau.

void main()
{


    //la mm danse: copier coller



    // on initie le tableau avec une valeur plus ou  moins grande comme l'homme est flemmard 1000 devrait suffir
    // personne va taper 1000 notes d'affilé j'pense
    int T[L]={0}, n, N, i;



    // là on récupère les entiers  après lui avoir demandé le nombre de note qu'il souhaite taper
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


    //now on determine la valeur maximale et sa position dans le tableau
    int max, posi;
    for(i=0;i<N;i++)
    {
        if(i==0)
        {
            max=T[i];
            posi=i+1;
        }
        else{
            if(max<T[i])
            {
                max=T[i];
                posi=i+1;
            }
        }

    }
    printf("\n\n\n\tLa valeur maximale du tableau est %d et \n\t\telle occupe la cellule ou position %d", max, posi);





























    printf("\n\n\n\n\n\n\n");


}

















