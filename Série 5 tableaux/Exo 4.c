//include <nuMa.SqualL.h>
#include <stdio.h>
#include <stdlib.h>
#define L 1000


    //Ecrire un programme qui permet de remplir un tableau de N notes. Le programme affiche les
    //valeurs du tableau ainsi que la moyenne des notes saisies.



void main()
{
    // on initie le tableau avec une valeur plus ou  moins grande comme l'homme est flemmard 1000 devrait suffir
    // personne va taper 1000 notes d'affilé j'pense
    float T[L]={0}, n;
    int N, i;



    // là on récupère les notes  après lui avoir demandé le nombre de note qu'il souhaite taper
    do
    {
        puts("Combien de notes souhaitez vous saisir ?");
        scanf("%d", &N);
    }while(N<=0);


    printf("\nSaisissez vos %d notes\n", N);
    for(i=0; i<N; i++)
    {
        do
        {
            printf("\nSaisissez la %d eme note valide svp\n\n", i+1);
            scanf("%f", &n);
        }while(n<0 || n>20);
        T[i]=n;

    }


    puts("\n");


    //on affiche les valeurs du tableau, une boucle, la routine^^

    printf("les %d notes que vous avez saisies sont:\n", N);
    puts("\n");
    for(i=0; i<N; i++)
    {
        printf("%0.2f | ", T[i]);
    }



    //enfin on détermine la moyenne boucle, somme, division, affichage ^^
    int som=0;
    printf("\n\n");
    for(i=0; i<N; i++)
    {
        som=som+T[i];
    }
    printf("La moyenne des notes saisies est: %0.2f", (som/N));






















    printf("\n\n\n\n\n\n\n");


}

















