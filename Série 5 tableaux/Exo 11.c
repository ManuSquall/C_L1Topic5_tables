//include <nuMa.SqualL.h>
#include <stdio.h>
#include <stdlib.h>
#define L 1000


    //Ecrire un programme qui permet de constituer un tableau T3 à partir de deux autres tableaux
    //(T1 & T2) de même taille N, déjà saisis par l’utilisateur. T3 = T1+T2.

void main()
{

    //bon ca change un peu (enfin lol)
    //on va quand mm copier coller une partie de l'exo 10 XD



    // on initie le tableau avec une valeur plus ou  moins grande comme l'homme est flemmard 1000 devrait suffir
    // personne va taper 1000 notes d'affilé j'pense
    int T1[L]={0}, T2[L]={0}, n, N, i;



    // là on récupère les entiers  après lui avoir demandé le nombre de note qu'il souhaite taper
    do
    {
        puts("Combien d'entiers souhaitez vous saisir dans les deux tableaux?");
        scanf("%d", &N);
    }while(N<=0);


    printf("\nSaisissez vos %d entiers pour le premier tableau\n", N);
    for(i=0; i<N; i++)
    {
        printf("\nSaisissez le %d eme entier valide svp\n\n", i+1);
        scanf("%d", &n);
        T1[i]=n;

    }

    puts("\n");
    printf("\nSaisissez vos %d entiers pour le deuxieme tableau\n", N);
    for(i=0; i<N; i++)
    {
        printf("\nSaisissez le %d eme entier valide svp\n\n", i+1);
        scanf("%d", &n);
        T2[i]=n;

    }


    puts("\n\n");




    //on affiche les valeurs des deux tableau, une boucle, la routine^^

    printf("les %d entiers que vous avez saisis pour le premier tableau sont:\n", N);
    puts("\n");
    for(i=0; i<N; i++)
    {
        printf("%d | ", T1[i]);
    }
    puts("\n");
    printf("les %d entiers que vous avez saisis pour le deuxieme tableau sont:\n", N);
    puts("\n");
    for(i=0; i<N; i++)
    {
        printf("%d | ", T2[i]);
    }




    puts("\n\n\n\n");
    //now on forme T3=t1+t2
    int T3[L]={0};
    for(i=0;i<N; i++)
    {
        T3[i]=T1[i]+T2[i];
    }
    //et on l'affiche
    printf("Le tableau T3 representant la somme des deux tableaux precedant est:\n");
    puts("\n");
    for(i=0; i<N; i++)
    {
        printf("%d | ", T3[i]);
    }


























    printf("\n\n\n\n\n\n\n");


}

















