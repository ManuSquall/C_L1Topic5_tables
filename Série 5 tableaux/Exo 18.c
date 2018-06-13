//by <nuMa.SqualL.h>
#include <stdio.h>
#include <stdlib.h>
#define L 1000



    //Ecrire un programme qui permet de remplir un tableau de N entiers. Le programme affiche les
    //valeurs saisies puis détermine et affiche le pourcentage de présence des nombre premiers.

void main()
{
    //c similaire à un exo que g deja fait dans la serie donc vai le chercher et copier coller #03:27
    //trouvé c l'exo 8, copier coller! lol



    int nbrprem=0, cptpr, k;


    // on initie le tableau avec une valeur plus ou  moins grande comme l'homme est flemmard 1000 devrait suffir
    // personne va taper 1000 notes d'affilé j'pense
    int T[L]={0}, n, N, i;



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



    //now on s'occupe des nombres premiers
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

    float pourcent;
    pourcent=(nbrprem*100)/N;
        printf("\n\n\tIl y a %d nombre premiers\n\n", nbrprem);
        printf("\t\tCe tableau est compose a %0.2f pourcent de nombres premiers", pourcent);



































    printf("\n\n\n\n\n\n\n");


}

















