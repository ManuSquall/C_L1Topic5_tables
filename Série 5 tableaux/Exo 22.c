//by <nuMa.SqualL.h>
#include <stdio.h>
#include <stdlib.h>
#define L 1000



    //M�me exercice que pr�c�demment mais le deuxi�me tableau ne doit pas contenir de doublon.

void main()
{

    //copier coller l'exo 21 et integer une partie de l'exo 20
    //viens de faire une semaine sans toucher lang c :-( un peu de mal a me remettre



    // on initie le tableau avec une valeur plus ou  moins grande comme l'homme est flemmard 1000 devrait suffir
    // personne va taper 1000 notes d'affil� j'pense
    int T[L]={0}, n, N, i, nbrprem=0 ;
    int Tt[L]={0};



    // l� on r�cup�re les entiers  apr�s lui avoir demand� le nombre d'entiers qu'il souhaite taper
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



    int cptpr, k, j;


    //on va utiliser l'affichage du pourcentage de presence des nombres premiers de l'exo 18
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
            if(T[i]!=0)
            {


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
                                        Tt[nbrprem] = T[i];
                                        nbrprem++;
                                    }



            }


        }
    }

    if(nbrprem!=0)
    {
            printf("\n\n\t les uniques nombres premiers que vous venez de taper sont:\n\n\n");
            puts("\n");
        for(i=0; i<nbrprem; i++)
        {
            printf("%d | ", Tt[i]);
        }
        puts("\n\n\n\n");

    }
    else
    {
        printf("\n\n\tVous n'avez tape aucun nombre premier!!");
    }












































    printf("\n\n\n\n\n\n\n");


}

















