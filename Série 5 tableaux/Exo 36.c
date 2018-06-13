//include <ManuSqualL.fr>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



    //Ecrire un programme qui permet de transférer dans un tableau, les nombre des
    //diagonales d’une matrice N*M déjà remplie par l’utilisateur.



    // seul les matrices carrées admettent des diagonales
    // une matrice est carrée si elle a le meme nombre de ligne et de colonne (N=M)


void main()
{
    int N, M, i , j;
     //dans notre cas on va stocker la diagonale principale et seconadaire dans une matrice d[2][N] et l'afficher

    do
    {
        puts("Entrez le nombre de ligne");
        scanf("%d", &N);
    }while(N<=0);

    do
    {
        puts("\n\nEntrez le nombre de colonne");
        scanf("%d", &M);
    }while(M<=0);

    int t[N][M], d[2][N];

    puts("\n\n\n\n");

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            printf("Saisissez la valeur de la cellule %d de la ligne %d \n", j+1, i+1);
            scanf("%d", &t[i][j]);
        }
    }

    puts("\n\n\n\n");
    puts("La matrice que vous avez saisie est:");
    for(i=0; i<N; i++)
    {
        for(j=0;j<M; j++)
        {
            printf("    %d     ", t[i][j]);

        }
        printf("\n");
    }




    if(N!=M)
    {
        puts("\")
        puts("la matrice saisie n'est par carree\n\telle ne peut donc pas avoir de diagonale");
    }
    else
    {



                //copie de la diagonale principale sur la premiere ligne
                for(j=0; j<N; j++)
                {
                    d[0][j]=t[j][((N-1)-j)];

                }



                //copie de la diagonale principale sur la deuxieme ligne
                 for(j=0; j<N; j++)
                {
                       d[1][j]=t[j][j];
                }







                puts("\n\n\n\n");

        //##########**BUG**##########
        //a ce niveau seul l'effet de la derniere boucle for s'affiche sur les deux lignes du tableau final :-(
        //si on commente la deuxiemme boucle for c'est l'effet de la premiere qui s'affiche


                puts("la premiere et la deuxieme diagonale que vous avez saisi sont:\n");
                for(i=0; i<2; i++)
                {
                    for(j=0; j<N; j++)
                    {
                        printf(" %d ", d[i][j]);

                    }
                    printf("\n");
                }

    }

































    puts("\n\n\n\n\n\n\n");


}

















