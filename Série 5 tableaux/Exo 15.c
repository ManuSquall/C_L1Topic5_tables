//by <nuMa.SqualL.h>
#include <stdio.h>
#include <stdlib.h>
#define L 1000


    //Ecrire un programme qui permet de trier dans l�ordre croissant un tableau de N entiers d�j�
    //rempli par l�utilisateur.

void main()
{

    //copier coller exo 14 ...comme d'hab (dans un premier temps)
    //mais tout va s'op�rer au niveau de la saisie des valeurs de chaque cellule ;-)
    //en fait pas du tout, le fait d'utiliser des tableau change tout apr�s environ 30 minute zoon� de reflexion g pu trouv� une soluce
    // rdv plus en bas




    // on initie le tableau avec une valeur plus ou  moins grande comme l'homme est flemmard 1000 devrait suffir
    // personne va taper 1000 notes d'affil� je pense ^^
    int T[L]={0}, TR[L]={0}, n, N, i;



    // l� on r�cup�re les entiers  apr�s lui avoir demand� le nombre d'entiers qu'il souhaite taper
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




    printf("\n\n\n\n\n");

    //fun begins now
    //l� j'ai initialis� un nouveau tableau c'est sur lui que je vais op�rer les changement ensuite l'afficher
    //on lui affecte donc toute les valeurs du tableau de depart: boucle comme d'hab
    for(i=0; i<N; i++)
    {
        TR[i]=T[i];
    }


    //je l'ai afficher ici pour comparer et m'aider pour la suite, on ne la pas demand� donc non facultatif
    /*
    for(i=0; i<N; i++)
    {
        printf("%d | ", TR[i]);
    }
    printf("\n\n\n\n\n");
    */




    //voila le boss!
    //on commence par initialiser deux variable diff�rente i et k; elles vont repr�senter nos compteurs
    //pour 2 boucles imbriqu�es
    // la variable a permettra d'effectuer des permutations (voir plus bas)

    int a,k;

    //prkw 2 boucles imbriqu�es??
    //parck dans la premi�re nous allons parcourir le tableau et, dans un premier temps
    //comparer les cellules qui contiennent un
    //entier  deux par deux!


    for(k=0; k<N; k++)
    {
            for(i=0; i<N; i++)
            {
                if(i!=(N-1))
                {
                    //la on compare la cellule actuelle � celle qui la suit
                    // il n'y a changement uniquement si elle se trouve superieur � la suivante
                    if(TR[i]>TR[i+1])
                    {
                        //c dans ce cas que notre variable de permutation commence sa bosse ;-)
                    a=TR[i];
                    TR[i]=TR[i+1];
                    TR[i+1]=a;
                    }
                    // c dans ce sens qu'on fur et � mesure qu'elle avance elle va les comparer 2 � 2 et effectuer
                    //un changement s'il le faut (si la cellule actuelle est > a la suivante
                }
                //jusqua  arriver � la derniere cellule (dans notre cas c'est N-1)
                //cette fois elle va la comparer a la tout premire sinon elle risque de la comparer � une cellule nulle
                //puisque toute les cellules qui suivent les N nombres sont nulles (a cause de l'initialisation)
                else{
                    if(TR[i]<TR[0])
                        {
                    a=TR[i];
                    TR[i]=TR[0];
                    TR[0]=a;
                    }
                }

            }
    }



    //enfin on affiche le tabkeau o� on a op�r� les modif! yata lol XD

    printf("Le tableau rang� dans l'ordre croissant donne:\n\n\n");
    for(i=0; i<N; i++)
    {
        printf("%d | ", TR[i]);
    }



































    printf("\n\n\n\n\n\n\n");


}

















