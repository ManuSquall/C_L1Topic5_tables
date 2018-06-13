//include <nuMa.SqualL.h>
#include <stdio.h>
#include <stdlib.h>
#define L 1000


    //Ecrire un programme qui permet de remplir un tableau de N entiers. Le programme affiche les
    //valeurs du tableau ainsi que les valeurs extrêmes du tableau.

void main()
{

    //je pense que par "valeur extrême" il sous entend minimum et maximum
    //bref copier coller de l'exo 13 puis modif




    // on initie le tableau avec une valeur plus ou  moins grande comme l'homme est flemmard 1000 devrait suffir
    // personne va taper 1000 notes d'affilé je pense ^^
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


    //now on determine la valeur maximale et la valeur minimale
    int max, min;
    for(i=0;i<N;i++)
    {
        if(i==0)
        {
            max=T[i];
            min=T[i];
        }
        else{
            if(max<T[i])
            {
                max=T[i];
            }
            if(min>T[i])
            {
                min=T[i];
            }
        }

    }
    printf("\n\n\n\tLa valeur maximale du tableau est %d et \n\t\tla valeur minimale du tableau %d", max, min);






























    printf("\n\n\n\n\n\n\n");


}

















