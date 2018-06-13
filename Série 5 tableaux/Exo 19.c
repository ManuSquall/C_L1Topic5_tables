//by <nuMa.SqualL.h>
#include <stdio.h>
#include <stdlib.h>
#define L 1000



    //Ecrire un programme qui permet de remplir un tableau de N entiers. Le programme affiche les
    //valeurs saisies puis détermine et affiche le pourcentage de présence de chaque valeur du
    //tableau.

void main()
{

    //copier coller une partie de l'exo 18 puis modif


     // on initie le tableau avec une valeur plus ou  moins grande comme l'homme est flemmard 1000 devrait suffir
    // personne va taper 1000 notes d'affilé j'pense
    int T[L]={0}, n, N, i;
    int Tt[L]={0};



    // là on récupère les entiers  après lui avoir demandé le nombre d'entiers qu'il souhaite taper
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
    puts("\n\n\n\n");



    int a, cpt, j, m;
    for(i=0; i<N; i++)
    {
        a=T[i];

        int cpt2=0;
        for(m=0; m<N; m++)
        {
            if(Tt[m]==a)
            {
                cpt2++;
            }
        }
        if(cpt2==0)
        {
            Tt[i]=T[i];
        }






        if(cpt2==0)
        {
            cpt=0;
            for(j=0; j<N; j++)
            {
                if(T[j]==a)
                    cpt++;
            }
            float pourcent;
            pourcent=(cpt*100)/N;
            printf("Le pourcentage de presence de la %d ieme valeur du tableau: %d est de %0.2f \n", i+1, a, pourcent );
        }

    }



































    printf("\n\n\n\n\n\n\n");


}

















