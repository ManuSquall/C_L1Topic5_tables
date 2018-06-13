//include <ManuSqualL.fr>
#include <stdio.h>
#include <stdlib.h>
#define L 1000
#define C 255



    //Ecrire un programme qui permet de remplir un tableau de questions. Chaque question
    //pourra contenir au max 254 caractères. Le saisie est conditionnée pas une question
    //« voulez-vous saisir une question ?». Le programme affiche les questions.








    typedef struct
    {
    char tab[C];
    }t;

void main()
{
    char rep;

    t tq [L];

    int nq, i, j;

    //nq va nous servir à connaitre le nombre de questions saisies
    nq=0;


     do{
            //pour l'esthétique
            if(nq!=0)
            {
                puts("\n");
            }

     //on stocke la question dans la chaine de la cellule [nq] du tableau
        printf("saisissez votre question %d \n", nq+1);
        gets(tq[nq].tab);

        nq++;

        do{
            puts("\nvoulez-vous saisir une autre question ?");
        scanf("%c", &rep);
        fflush(stdin);
        }while(rep!='n' && rep!='o' && rep!='N' && rep!='O');

    }while(rep=='o' || rep=='O');

    puts("\n\n\n\n");
    printf("\nles %d questions que vous avez saisis sont:\n\n", nq);
    for(i=0; i<nq; i++)
       {
            puts(tq[i].tab);
            printf("\n");
        }
































    puts("\n\n\n\n\n\n\n");


}

















