//by <nuMa.SqualL.h>
#include <stdio.h>
#include <stdlib.h>
#define L 1000


    //Ecrire un programme qui permet de remplir un tableau d�entiers. La saisie s�arr�te lorsque
    //l�utilisateur entre la valeur z�ro (0) qui ne sera pas prise en compte dans le tableau. Le
    //programme affiche les valeurs saisies puis d�termine et affiche le plus petit nombre
    //sup�rieur � z�ro et le plus grand nombre inf�rieur � z�ro s�ils existent.

void main()
{

    // SQUAAAAAAAlll!! :-)
    //la flemme de commenter celui l� mais tu devrais comprendre en suivant les lignes


    int T[L]={0}, i=0, n, k;



    do
    {
        printf("Saisissez le %d ieme entier\n", i+1);
        scanf("%d", &n);
        if(n!=0)
        {
            T[i]=n;
            i++;
        }
    }while(n!=0);
    puts("\n\n\n");
    printf("Vous avez saisi le tableau de %d  entiers suivant:\n\n", i);
    for(k=0; k<i; k++)
    {
        printf("%d | ", T[k]);
    }

    puts("\n\n\n\n");



    int cptp=0, cptn=0, ppnbr=0, pgnbr=0;

    for(k=0; k<i; k++)
    {
        if(T[k]>0)
        {
            cptp++;
            if(cptp==1)
            {
                ppnbr=T[k];
            }
            else{
                if(ppnbr>T[k])
                {
                    ppnbr=T[k];
                }
            }
        }


        if(T[k]<0)
        {
            cptn++;
            if(cptn==1)
            {
                pgnbr=T[k];
            }
            else{
                if(pgnbr<T[k])
                {
                    pgnbr=T[k];
                }
            }
        }
    }


    if(ppnbr==0)
    {
        printf("Il n'existe pas de plus petit nombre superieur a zero\n");
    }
    else{
        printf("Le plus petit nombre superieur a zero est %d", ppnbr);
    }

    puts("\n\n\n");
    if(pgnbr==0)
    {
        printf("Il n'existe pas de plus grand nombre inferieur a zero\n");
    }
    else{
        printf("Le plus grand nombre inferieur a zero est %d", pgnbr);
    }







































    printf("\n\n\n\n\n\n\n");


}

















