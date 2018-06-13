//include <nuMa.SqualL.h>
#include <stdio.h>
#include <stdlib.h>
#define L 1000


    //Ecrire un programme qui permet de remplir un tableau de N valeurs entières. Le programme
    //affiche toutes les valeurs saisies ainsi que le produit des valeurs négatives et la
    //somme des valeurs positives.



void main()
{


    // copier coller de l'exo 6, le début ^^


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

    printf("les %d entiers que vous avez saisies sont:\n", N);
    puts("\n");
    for(i=0; i<N; i++)
    {
        printf("%d | ", T[i]);
    }





    // copier coller de nouveau sauf qu'on change légèrement
    //le produit des valeurs négatives et la
    //somme des valeurs positives.


    int prodn=1, somp=0;
    for(i=0; i<N; i++)
    {
        if(T[i]<0)
        {
            prodn=prodn*T[i];
        }
        if(T[i]>0)
        {
            somp=somp+T[i];
        }
    }
    puts("\n\n");
    printf("\tLa somme des valeurs positifs est %d \n\t\tet le produit des valeurs negatives est %d", somp, prodn);





















    printf("\n\n\n\n\n\n\n");


}

















