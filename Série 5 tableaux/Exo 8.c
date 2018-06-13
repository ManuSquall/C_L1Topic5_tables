//include <nuMa.SqualL.h>
#include <stdio.h>
#include <stdlib.h>
#define L 1000


    //Ecrire un programme qui permet de remplir un tableau de N valeurs entières. Le programme
    //affiche toutes les valeurs saisies ainsi que le nombre de nombres premiers et le nombre
    //de nombres parfaits.

void main()
{

    //copier coller une partie de l'exo 7
    int nbrpar=0, nbrprem=0, cptpa, cptpr, k, j;


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



    //now on s'occupe des nombres premiers et des nombres parfaits
    for(i=0;i<N;i++)
    {
        cptpr=0;
        for(k=1;k<=T[i];k++)
        {
            if(T[i]%k==0)
            {
                cptpr++;
            }
        }
        if(cptpr==2)
        {
            nbrprem++;
        }
    }


    for(i=0;i<N;i++)
    {
        if(T[i]!=0)
        {
            cptpa=0;
        for(j=1;j<T[i];j++)
        {
            if(T[i]%j==0)
            {
                cptpa=cptpa+j;
            }
        }
        if(cptpa==T[i])
        {
            nbrpar++;
        }
        }

    }


        printf("\n\n\tIl y a %d nombre premiers\n\t\t Il y a %d nombre parfaits", nbrprem, nbrpar);























    printf("\n\n\n\n\n\n\n");


}

















