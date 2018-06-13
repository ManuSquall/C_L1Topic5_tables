//include <ManuSqualL.fr>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define L 1000
#define C 201



    //Ecrire un programme qui permet de remplir un tableau N de phrases. Chaque phrase
    //pourra contenir 200 caractères. Le programme remplace tous les espaces par des
    //tirets du huit (_). Le programme affiche le tableau avant et après.

void main()
{
    typedef struct
    {
        char t[C]
    }tab;
    tab ph[L], ph2[L];

    int i, N, j, espace, k, h;
    do
    {
        puts("combien de phrases voulez vous saisir?");
        scanf("%d", &N);
    }while(N<=0);
    fflush(stdin);
    for(i=0; i<N; i++)
    {
        printf("\nEntrez la phrase %d \n", i+1);
        gets(ph[i].t);
    }
    puts("\n\n\n\n");

    /*
    puts("l'ensemble des phrases saisies est:\n");
     for(i=0; i<N; i++)
    {
            puts(ph[i].t);
    }*/


    //changement de ' ' par '_'

    espace=0; //espace va nous permettre de savoir si une phrase contient un espace
    //s'il y a espace on opère un changement sinon on copie juste dans un autre tableau

    for(i=0; i<N; i++)
    {
        for(j=0; j<C; j++)
        {
            if(ph[i].t[j]==' ')
            {
                espace++;
            }
        }

        if(espace==0) //si espace=0 alors la phrase ne contient pas d'espace on la copie juste
        {
            strcpy(ph2[i].t, ph[i].t);
        }
        else
        {
            strcpy(ph2[i].t, ph[i].t);
            for(j=0; j<C; j++)
            {
                if(ph2[i].t[j]==' ')
                {
                    ph2[i].t[j]='_';
                    //ce qui suit représente le début de ma premiere idée je me suis un peu emballé :-D
                    /*
                    for(k=0; k<j; k++)
                    {
                        ph2[i].t[k]=ph[i].t[k];
                    }
                    strcpy(ph2[i].t, (strcat(ph2[i].t, "_")));
                   // ph2[i].t=strcat(ph2[i].t, "_");
                    for(h=k+1; h<strlen(ph[i].t); h++)
                    {
                        ph2[i].t[h]=ph[i].t[h];
                    }*/
                }
            }
        }
    }


    puts("\n\n\n\n");

    //affichage du tableau
    puts("le tableau que vous avez saisi est:\n");
    for(i=0; i<N; i++)
    {
        puts(ph[i].t);
    }

    puts("\n\n\n\n");
    puts("En remplacant les \" \" par \"_\" on obtient:\n");
    //affichage du tableau modifie
    for(i=0; i<N; i++)
    {
        puts(ph2[i].t);
    }






























    puts("\n\n\n\n\n\n\n");


}

















