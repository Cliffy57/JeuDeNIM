#include <stdio.h>

struct parametrage {
    int next;
    int niveau;
    int nlig;
    int ncol;
};
typedef struct parametrage parametrage;
int lireentier(int borninf,int bornsup )
{
    int nombre_entre;
    while (scanf("%d",&nombre_entre) !=1  || (borninf > nombre_entre) || (nombre_entre > bornsup))
        {
        printf("Le nombre saisi est invalide !\n");

        }

    return nombre_entre;
}
int ordre()
{
    int next;
    int borninf = 1;
    int bornsup = 2;
        // On demande qui commence
        printf("qui commence ? l ordinateur (1) ou le joueur (2) :");

        // On verifie le nombre en entree
        next=lireentier(borninf,bornsup);
    return next;
}
int difficulte()
{
    int niveau;
    int borninf = 1;
    int bornsup = 4;

        // On demande la difficulte
        printf("Selectionner le niveau de 1 a 4 : ");

        // On verifie le nombre en entree
        niveau=lireentier(borninf,bornsup);
    return niveau;
}
int taillecol()
{
  int ncol;
  int vmax=9;int vmin=2;
        // On demande les col
        printf("Selectionner le nombre de colonnes de  %d a %d : ",vmin,vmax);

        // On verifie le nombre en entree
        ncol=lireentier(vmin,vmax);
    return ncol;
}
int taillelig()
{
  int nlig;
  int vmax=9;int vmin=2;
        // On demande les lig
        printf("Selectionner le nombre de lignes de %d a %d : ",vmin,vmax);

        // On verifie le nombre en entree
        nlig=lireentier(vmin,vmax);
    return nlig;
}

parametrage parametres()
{
    parametrage param;
    param.next=ordre();
    param.niveau=difficulte();
    param.nlig=taillelig(); 
    param.ncol=taillecol();

    return param;
    /*
    printf("L'ordre est %d\n",next);
    printf("La difficulte est de %d\n",niveau);

    printf("L'ordre est %d\n",ordre());
    printf("La difficulte %d\n",difficulte());*/
}

typedef struct T_case T_case;
struct T_case
    {
        int Xcase;
        int Ycase;
    };

void affichplateau(int Xplateau,int Yplateau,int xpos,int ypos)
{
  int i=1,j=1,k=1;
  printf("   ");
  for(k=1;k!=Xplateau+1;k++)
  {printf(" %d ",k);}
  printf("\n");
  for(j=1;j<Yplateau+1;j++){
    printf(" %d ",j);
    for(i=1;i<Xplateau+1;i++)
      {
        
        if(xpos == i && ypos ==j)
        {
          printf("|X|");
        }
        else
        {
          printf("|-|");
        }
      }
    printf("\n");
    }}

T_case Coup_joueur(int xplateau,int yplateau,T_case pion)
{
    int reponse=0;
    if(pion.Ycase == yplateau-1 && pion.Xcase == xplateau-1)
        {
          printf("Où veux tu allez?\n1.A droite\n2.En bas?\n");
          scanf("%d",&reponse);
          switch (reponse)
          {
          case 1:
            pion.Xcase++;
            break;
          
          case 2:
            pion.Ycase++;
            break;

          default: printf("Mauvaise saisie, recommencez\n");
        }}
        
        else if(pion.Xcase == xplateau && pion.Ycase==yplateau-1)
        {
          printf("Où veux tu allez?\n1.En bas?\n");
          scanf("%d",&reponse);
          switch (reponse)
          {
          case 1:
            pion.Ycase++;
            break;

          default: printf("Mauvaise saisie, recommencez\n");
        }}

        else if(pion.Ycase == yplateau && pion.Xcase == xplateau-1)
        {
          printf("Où veux tu allez?\n1.A droite\n");
          scanf("%d",&reponse);
          switch (reponse)
          {
          case 1:
            pion.Xcase++;
            break;

          default: printf("Mauvaise saisie, recommencez\n");
        }}

        else if(pion.Xcase == xplateau-1 && pion.Ycase!=yplateau)
        {
          printf("Où veux tu allez?\n1.A droite\n2.En bas?\n3.En bas x2?\n");
          scanf("%d",&reponse);
          switch (reponse)
          {
          case 1:
            pion.Xcase++;
            break;
          
          case 2:
            pion.Ycase++;
            break;

          case 3:
            pion.Ycase = pion.Ycase +2;
            break;

          default: printf("Mauvaise saisie, recommencez\n");
        }}
        
        else if(pion.Ycase == yplateau-1 && pion.Xcase!=xplateau)
        {
          printf("Où veux tu allez?\n1.A droite\n2.En bas?\n3.A droite x2?\n");
          scanf("%d",&reponse);
          switch (reponse)
          {
          case 1:
            pion.Xcase++;
            break;
          
          case 2:
            pion.Ycase++;
            break;

          case 3:
            pion.Xcase = pion.Xcase +2;
            break;

          default: printf("Mauvaise saisie, recommencez\n");
        }}
        else if(pion.Xcase == xplateau )
        {
          printf("Où veux tu allez?\n1.En bas?\n2.En bas x2?\n");
          scanf("%d",&reponse);
          switch (reponse)
          {
          case 1:
            pion.Ycase++;
            break;
          
          case 2:
            pion.Ycase = pion.Ycase +2;
            break;
          
          default: printf("Mauvaise saisie, recommencez\n");
          }
        }
        else if(pion.Ycase == yplateau)
        {
          printf("Où veux tu allez?\n1.A droite\n2.A droite x2?\n");
          scanf("%d",&reponse);
          switch (reponse)
          {
          case 1:
            pion.Xcase++;
            break;
          
          case 2:
            pion.Xcase= pion.Xcase +2;
            break;

          default: printf("Mauvaise saisie, recommencez\n");
        }}
        else
        {
          printf("Où veux tu allez?\n1.A droite\n2.En bas?\n3.A droite x2?\n4.En bas x2?\n");
          scanf("%d",&reponse);
          switch (reponse)
          {
          case 1:
            pion.Xcase++;
            break;
          
          case 2:
            pion.Ycase++;
            break;
          
          case 3:
            pion.Xcase= pion.Xcase +2;
            break;

          case 4:
            pion.Ycase = pion.Ycase +2;
            break;

          default: printf("Mauvaise saisie, recommencez\n");

        } }
        return pion;
}
void lancerpartie(int xplateau,int yplateau)
{
  
  T_case pion = {1,1};
  affichplateau(xplateau,yplateau,pion.Xcase,pion.Ycase);
  while(pion.Xcase !=xplateau || pion.Ycase!=yplateau)
      {
        pion = Coup_joueur(xplateau,yplateau,pion);
        affichplateau(xplateau,yplateau,pion.Xcase,pion.Ycase);
      }
}
int main()
{
    parametrage param2 = parametres();
    lancerpartie(param2.ncol,param2.nlig);
}
