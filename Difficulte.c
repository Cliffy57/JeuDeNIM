#include <stdio.h>

int main()
{
    int difficulteselect;

        // On demande la difficulte
        printf("Selectionner le niveau de 1 a 4 : ");

        // On verifie le nombre en entree
        while ( scanf("%d", &difficulteselect)!=1 || (difficulteselect>4)|| (difficulteselect<1))
        {
                printf("Erreur !\n");    
            
        }
    return 0;
}
