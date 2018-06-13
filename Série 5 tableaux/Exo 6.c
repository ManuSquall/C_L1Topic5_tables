//include <nuMa.SqualL.h>
#include <stdio.h>
#include <stdlib.h>
#define L 1000


    //Ecrire un programme qui permet de remplir un tableau de N valeurs entières. Le programme
    //affiche toutes les valeurs saisies ainsi que le nombre de valeurs négatives et le nombre
    //de valeurs positives.


void main()
{
    // copier coller le début de l'exo 4 encore sauf que le tableau est de type int


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



    // a present on affiche le nombre d'entiers positifs et le nombre d'entiers negatifs
    //compteur, et affichage
    int cptp=0, cptn=0;
    for(i=0; i<N; i++)
    {
        if(T[i]<0)
        {
            cptn++;
        }
        if(T[i]>0)
        {
            cptp++;
        }
    }
    puts("\n\n");
    printf("\tLe nombre de valeurs positifs est %d \n\t\tet le nombre de valeurs negatives est %d", cptp, cptn);


















    printf("\n\n\n\n\n\n\n");


}

















