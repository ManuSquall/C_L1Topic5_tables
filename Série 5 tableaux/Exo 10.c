//include <nuMa.SqualL.h>
#include <stdio.h>
#include <stdlib.h>
#define L 1000


    //Ecrire un programme qui permet de remplir un tableau d’entiers. Le programme remplace
    //toutes les occurrences de X par Y. Les valeurs de X et de Y sont données par l’utilisateur.
    //Le programme affiche les valeurs du tableau avant et après.

void main()
{
    //copier coller de l'exo 9 et modif


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





    // on va demander x et y
    int x, y;
    puts("\n\n");
    printf("Quel est l'entier que vous voulez substituer?\n");
    scanf("%d", &x);
    printf("Par quel entier voulez vous substituer %d?\n",x);
    scanf("%d", &y);

    //on remplace x par y chaque fois qu'on le trouve
    for(i=0;i<N;i++)
    {
        if(T[i]==x)
        {
            T[i]=y;
        }
    }


    //on affiche les valeurs du tableau, une boucle, la routine^^

    printf("\n\nEn remplacant %d par %d nous obtenons le tableau suivant:\n", x, y);
    puts("\n");
    for(i=0; i<N; i++)
    {
        printf("%d | ", T[i]);
    }
























    printf("\n\n\n\n\n\n\n");


}

















