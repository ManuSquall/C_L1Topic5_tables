//include <nuMa.SqualL.h>
#include <stdio.h>
#include <stdlib.h>
#define L 1000


    //Ecrire un programme qui permet calculer le produit scalaire de deux tableaux T1 de taille N1 et
    //T2 de taille N2, déjà remplis par l’utilisateur. Pour calculer le produit scalaire, il faut
    //multiplier chaque élément de T1 par chaque élément de T2, et additionner le tout.

void main()
{

    //lol heureusement qu'il a expliqué ce qu'est un produit scalaire
    // copier coller exo 11 sauf avec quelque modif :-D
    //cette fois N1 pour T1 et N2 pour T2
    int som=0;




    // on initie le tableau avec une valeur plus ou  moins grande comme l'homme est flemmard 1000 devrait suffir
    // personne va taper 1000 notes d'affilé j'pense
    int T1[L]={0}, T2[L]={0}, n, N1, N2, Nm, i;



    // là on récupère les entiers  après lui avoir demandé le nombre d'entier qu'il souhaite taper
    do
    {
        puts("Combien d'entiers souhaitez vous saisir dans le premier tableau?");
        scanf("%d", &N1);
    }while(N1<=0);

    do
    {
        puts("Combien d'entiers souhaitez vous saisir dans le deuxieme tableau?");
        scanf("%d", &N2);
    }while(N2<=0);



    printf("\nSaisissez vos %d entiers pour le premier tableau\n", N1);
    for(i=0; i<N1; i++)
    {
        printf("\nSaisissez le %d eme entier valide svp\n\n", i+1);
        scanf("%d", &n);
        T1[i]=n;

    }

    puts("\n");
    printf("\nSaisissez vos %d entiers pour le deuxieme tableau\n", N2);
    for(i=0; i<N2; i++)
    {
        printf("\nSaisissez le %d eme entier valide svp\n\n", i+1);
        scanf("%d", &n);
        T2[i]=n;

    }


    puts("\n\n");




    //on affiche les valeurs des deux tableau, une boucle, la routine^^

    printf("les %d entiers que vous avez saisis pour le premier tableau sont:\n", N1);
    puts("\n");
    for(i=0; i<N1; i++)
    {
        printf("%d | ", T1[i]);
    }
    puts("\n");
    printf("les %d entiers que vous avez saisis pour le deuxieme tableau sont:\n", N2);
    puts("\n");
    for(i=0; i<N2; i++)
    {
        printf("%d | ", T2[i]);
    }




    puts("\n\n\n\n");
    //now on forme T3=t1*t2, il va représenter le produit scalaire
    //pour parcourir T3 on doit avoir un seul N: Nmax, le plus grand des deux
    if(N1>N2)
    {
        Nm=N1;
    }
    else
    {
        Nm=N2;
    }

    int T3[L]={0};

    //on multiplie
    for(i=0;i<Nm; i++)
    {
        T3[i]=T1[i]*T2[i];
    }
    //on additionne le tout
    for(i=0;i<Nm; i++)
    {
        som= som+T3[i];
    }





    //et on l'affiche
    /* //si vous voulez verifiez
    for(i=0; i<Nm; i++)
    {
        printf("%d | ", T3[i]);
    }*/
    printf("Le produit scalaire des deux tableaux precedant est %d\n", som);



























    printf("\n\n\n\n\n\n\n");


}

















