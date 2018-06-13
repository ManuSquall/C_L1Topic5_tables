//by <nuMa.SqualL.h>
#include <stdio.h>
#include <stdlib.h>
#define L 20
//comme on est limité ici a 15 autant alléger ma petite ram


    //Ecrire un programme qui permet de remplir un tableau d’entiers. la saisie est conditionnée par
    //une question « Voulez-vous saisir un entier ?». toutefois, le nombre de valeur ne doivent pas
    //dépasser 15. Le programme affiche toutes les valeurs saisies puis détermine et affiche le
    //maximum et le minimum des nombre négatif ainsi que le maximum et le minimum des nombre
    //positifs.

void main()
{

    //c a peu près le mm que le numero 16.....
    //commence a être blazé, #02:22
    //plus de coms, de toute facon c assez compréhensible si on suit la logique.... ma logique lol


    int T[L]={0},i=0, n, k;
    char rep;




    do
    {
        fflush(stdin);
        printf("\n\nVoulez vous saisir un entier? O ou N\n");
        scanf("%c", &rep);
        //je viens de jeter un oeil aux exos suivant, le 19 et le 20 ont l'air chaud 0_0
        if(rep=='o' || rep=='O')
        {
            printf("Saisissez le %d ieme entier du tableau\n",i+1);
            scanf("%d", &n);
            T[i]=n;
            i++;
        }
    }while(i<15 && rep=='o' || rep=='O');

//BIZAREMENT IL Y A UN BUG QUAND JE MET La CONDITION DU I<2 EN DERNIER ! A ANALYSER!


    printf("\n\n\n\nle tableau de %d entiers que vous venez de former est:\n", i);
    for(k=0;k<i; k++)
    {
        printf("%d | ", T[k]);
    }


    //bon a partir de là on va un peu copier coller l'exo 16 :-)
    // et modifier bien sur




    puts("\n\n\n\n");



    int cptp=0, cptn=0, maxposi=0, minposi=0, maxnega=0, minnega=0;

    for(k=0; k<i; k++)
    {
        if(T[k]>0)
        {
            cptp++;
            if(cptp==1)
            {
                maxposi=T[k];
                minposi=T[k];
            }
            else{
                if(minposi>T[k])
                {
                    minposi=T[k];
                }
                if(maxposi<T[k])
                {
                    maxposi=T[k];
                }
            }
        }


        if(T[k]<0)
        {
            cptn++;
            if(cptn==1)
            {
                maxnega=T[k];
                minnega=T[k];
            }
            else{
                if(minnega>T[k])
                {
                    minnega=T[k];
                }
                if(maxnega<T[k])
                {
                    maxnega=T[k];
                }
            }
        }
    }


    //a present on passe a l'affichage en prenant en compte les cas où certaines variables sont absente ^^ #03:15
    if(maxposi==0 && minposi==0)
    {
        printf("\tIl n'y a pas de maximum ni de minimum positifs puisque vous n'en avez pas saisi :-(\n\n\n");
    }
    else{
        printf("\tLe maximum positif est %d\n\t\tLe minimum positif est %d\n\n\n ", maxposi, minposi);
    }


    if(maxnega==0 && minnega==0)
    {
        printf("\tIl n'y a pas de maximum ni de minimum negatifs puisque vous n'en avez pas saisi :-(\n\n\n");
    }
    else{
        printf("\tLe maximum negatif est %d\n\t\tLe minimum negatif est %d\n\n\n ", maxnega, minnega);
    }









































    printf("\n\n\n\n\n\n\n");


}

















