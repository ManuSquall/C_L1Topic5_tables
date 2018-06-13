//include <ManuSqualL.fr>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




    //Soit une matrice binaire (composée que de 0 et/ou 1). Ecrire un programme permettant remplir la
    //matrice binaire de N lignes et M colonnes, puis détermine et affiche :
//- Le numéro de la colonne contenant le plus de 0 ;
//- Le numéro de la ligne contenant le plus de 1 ;
//- Le pourcentage de 0 dans le tableau ;
//- Le pourcentage de 1 dans le tableau.





void main()
{

    int N, M, i , j, nbrz, nbru, limax, colmax, d[100], max, cpt;
    nbrz=0; nbru=0, colmax=0, limax=0;

    //afin de connaitre le nmbre de 0 et de 1 nous allons passer suivant les lignes de colonnes en colonnes
    //et incrémenter un cpt chaque fois qu'on croise un 0
    //a la fin on stocke pour chaque colonne le cpt au mm numero de colonne du tableau t[M]
    //on compare après chaque cellule pour sortir la colonne ayant le plus grand numero
    //on parcoure de nouveau une boucle et on incrémente nbrz avec chaque cellule du tableau



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

    int t[N][M];

    puts("\n\n");
    srand(time(NULL));
    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {

            t[i][j]= (rand() % 2);
        }
    }

    puts("\n\n\n\n");
    puts("La matrice de 0 et/ou de 1 generee est:\n");
    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            printf("%d | ", t[i][j]);

        }
        printf("\n");
    }



    //- Le numéro de la colonne contenant le plus de 0
    puts("\n\n\n\n");
    for(i=0; i<M; i++)
    {
        cpt=0;
        for(j=0; j<N; j++)
        {
            if(t[j][i]==0)
            {
                cpt++;
            }
        }
        d[i]=cpt;
    }
    for(i=0; i<M; i++)
    {
        //- Le pourcentage de 0 dans le tableau ;
        //**********************
        nbrz=nbrz+d[i];
        //*********************
        if(i==0)
        {
            max=d[i];
            colmax=i+1;
        }
        else
        {
            if(max<d[i])
            {
                max=d[i];
                colmax=i+1;
            }
        }
    }
    printf("\tLa colonne contenant le plus de \"0\" est la colonne %d avec %d zero \"0\"", colmax, max);








    //- Le numéro de la ligne contenant le plus de 1
    puts("\n\n\n\n");
    for(i=0; i<N; i++)
    {
        cpt=0;
        for(j=0; j<M; j++)
        {
            if(t[i][j]==1)
            {
                cpt++;
            }
        }
        d[i]=cpt;
    }
    for(i=0; i<N; i++)
    {
        //- Le pourcentage de 1 dans le tableau ;
        //*******************
        nbru=nbru+d[i];
        //******************


        if(i==0)
        {
            max=d[i];
            limax=i+1;
        }
        else
        {
            if(max<d[i])
            {
                max=d[i];
                limax=i+1;
            }
        }
    }
    printf("\tLa ligne contenant le plus de \"1\" est la ligne %d avec %d un \"1\"", limax, max);
//    puts("\n");
//    for(i=0; i<N; i++)
//    {
//        printf("%d  ", d[i]);
//    }



    //- Le pourcentage de 0 dans le tableau ;

    float moyz=(nbrz*100)/(N*M);

    float moyu=(nbru*100)/(N*M);


//    puts("\n\n");
//    printf("nbru= %d et nbrz= %d ", nbru, nbrz);

    puts("\n\n\n\n");
    //- Le pourcentage de 0 dans le tableau ;
    printf("\t\tLe pourcentage de 0 dans le tablleau est de  %0.2f %", moyz);


    puts("\n\n");
    //- Le pourcentage de 1 dans le tableau ;
    printf("\t\tLe pourcentage de 1 dans le tablleau est de  %0.2f %", moyu);











































    puts("\n\n\n\n\n\n\n");


}

















