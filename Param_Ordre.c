#include <stdio.h>

int main()
{
    int ordre;

        // On demande qui commence
        printf("qui commence ? l ordinateur (1) ou le joueur (2) :");

        // On verifie le nombre en entree
        while ( scanf("%d", &ordre)!=1 || (ordre>2)|| (ordre<1))
        {
                printf("Erreur !\n");    
            
        }
    return 0;
}
