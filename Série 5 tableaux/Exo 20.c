//by <nuMa.SqualL.h>
#include <stdio.h>
#include <stdlib.h>
#define L 1000



    //Ecrire un programme qui permet de remplir un tableau de N entiers sans doublons. Le
    //programme affiche les entiers saisis.

void main()
{





    // on initie le tableau avec une valeur plus ou  moins grande comme l'homme est flemmard 1000 devrait suffir
    // personne va taper 1000 notes d'affilé j'pense
    int T[L]={0}, n, N, i, j, nbruniq=0 ;
    int Tt[L]={0};



    // là on récupère les entiers  après lui avoir demandé le nombre d'entiers qu'il souhaite taper
    do
    {
        puts("Combien d'entiers uniques souhaitez vous saisir ?");
        scanf("%d", &N);
    }while(N<=0);


    printf("\nSaisissez vos %d entiers uniques\n", N);
    i=0;
    while(i<N)
    {
        printf("\nSaisissez le %d eme entier unique valide svp\n\n", i+1);
        scanf("%d", &n);

        int cptdouble=0;
        for(j=0;j<N; j++)
        {
            if(Tt[j]==n)
            {
                cptdouble++;

            }
        }
        if(cptdouble==0)
        {
            T[i]=n;
            Tt[i]=n;
            nbruniq++;
            i++;
        }
    }


    puts("\n");


    //on affiche les valeurs du tableau, une boucle, la routine^^

    printf("les %d entiers uniques que vous avez saisis sont:\n", nbruniq);
    puts("\n");
    for(i=0; i<nbruniq; i++)
    {
        printf("%d | ", T[i]);
    }
    puts("\n\n\n\n");






































    printf("\n\n\n\n\n\n\n");


}

















