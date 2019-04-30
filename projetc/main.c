#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "annexe.h"

int main(int argc, char *argv[])
{

int i = 0;
int rejouer = 1;
int menu = 0;
char pseudo[30] = {};
int lettreTrouvee[4] = {0};
int nbreDeCoups = 10;
char motSecret[] = "BLEU";
char lettre = 0;


while(menu != 1)
{
    printf("\t\t\t--- Bienvenue dans le pendu ---\n");
    printf("\t1-Jouer\n");
    printf("\t2-Les regles\n");
    printf("\t3-Credits\n");
    printf("\t");
    scanf("%d" , &menu);
    system("cls");

    if(menu==1)
    {
        printf("Quel est ton pseudonyme ?\n");
        scanf("%s" , pseudo);
        system("cls");
        printf("Ok %s, trouve le mot mystere !\n" , pseudo);

        while(nbreDeCoups < 4 && !gagne(lettreTrouvee))
        {
            printf("\n");
            printf("%s, il te reste %d coups à jouer !\n" , pseudo, nbreDeCoups);
            printf("Le mot mystere est : \n");

            for(i = 0 ; i < 4 ; i++)
            {

                if(lettreTrouvee[i])
                printf("%c" , motSecret[i]);
                else
                printf("*");
        }
        printf("Propose une lettre : \n");

        }


    }

    if(menu==2)
{

printf("\t\tLe but du jeu est simplissime, trouver le mot mystere en un minimum de coup !\n");
printf("\t\tVous avez 10 coups maximum !\n");
printf("\n");
}

   if(menu==3)
   {
       printf("\t\tLEPENDU2019 REALISE PAR VINZONIX ET IZIFRUIT, TOUT DROITS RESERVES\n");
       printf("\n");
   }

}







return 0;
}
