//include <ManuSqualL.fr>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>





//   Ecrire un programme qui permet de remplir une matrice d’entier d’ordre N.
//  le programme affiche le contenu de la matrice ainsi que :
//  - Le minimum des maxima de chaque colonne
//  - Le maximum des minima de chaque ligne.




//    explication?
//    pour le minimum des maxima de chaque colonne (mimax) on va d'abord parcourir la matrice par colonne puis sortir pour chaqe colonne son
//    maximum, celui ci sera stocké dans un tableau ayant le mm nombre de colonne (tmax[N]), une fois tous les maximums des colonnes stockés
//    on va parcourir tmax[N] et sortir au niveau de ce tableau le minimum et on l'affiche!
//
//    pour le maximum des minima de chaque ligne on applique la mm logique que précédemment et le tour est joué ;-)
//
//    #ManuSqualL









void main()
{
    int N, cx, i, j;


    //saisie de l'ordre de la matrice
    do
    {
        system("cls");
        puts("Donnez l'ordre de la matrice que vous souhaitez saisir !");
        scanf("%d", &N);
    }while(!(N>0));



    int t[N][N], tmax[N], tmin[N], mimax, maxmi;



    puts("\n\n");

    //remplissage de la matrice de 2 manieres
    printf("Vous souhaitez utiliser une matrice d'ordre %d . Voulez vous:\n\n\t 1- Saisir les valeurs des cellules \n\t 2- Les generer automatiquement", N);
    do
    {
        scanf("%d", &cx);
    }while(!(cx==1 || cx==2));

    puts("\n\n\n");
    switch(cx)
    {
    case 1:
        //remplissage manuel
        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                printf("Saisissez la valeur de la cellule %d de la ligne %d \n", j, i);
                scanf("%d", t[i][j]);
            }
        }
        break;
    case 2:
        //remplissage automatique
        srand(time(NULL));
        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                t[i][j]= (rand() % N);
            }
        }
        break;
    }

    //affichage de la matrice
    if(cx==1)
        printf("La matrice d'ordre %d saisie est:", N);
    else
        printf("La matrice d'ordre %d generee est:", N);


        puts("\n\n");
    for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                printf("| %d |", t[i][j]);
            }
            printf("\n");
        }




        //  - Le minimum des maxima de chaque colonne

        //determination des maxima de chaque colonne
        for(j=0; j<N; j++)
        {
            for(i=0; i<N; i++)
            {
                if(i==0)
                {
                    tmax[j]=t[i][j];
                }
                else
                {
                    if(tmax[j]<t[i][j])
                    {
                        tmax[j]=t[i][j];
                    }
                }
            }
        }

        //determination du minimum des maximas
        for(j=0; j<N; j++)
        {
            if(j==0)
                mimax=tmax[j];
            else
            {
                if(mimax>tmax[j])
                    mimax=tmax[j];
            }
        }







        //- Le maximum des minima de chaque ligne.

        //determination des minima de chaque ligne
        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                if(j==0)
                {
                    tmin[j]=t[i][j];
                }
                else
                {
                    if(tmin[j]>t[i][j])
                    {
                        tmin[j]=t[i][j];
                    }
                }
            }
        }

        //determination du maximum des minima
        for(j=0; j<N; j++)
        {
            if(j==0)
                maxmi=tmin[j];
            else
            {
                if(maxmi<tmin[j])
                    maxmi=tmin[j];
            }
        }





    //affichage du minimum des maxima et du maximum des minima
    puts("\n\n\n\n");
    printf("\t\tLe minimum des maxima de chaque colonne est : %d", mimax);
    puts("\n\n");
    printf("\t\t\tLe maximum des minima de chaque ligne est : %d", maxmi);


















    //end
    //Série des 40 exos enfin fini!!! XD













    puts("\n\n\n\n\n\n\n");

    }

















