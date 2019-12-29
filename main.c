#include <stdio.h>
#include <stdlib.h>
#include"function.h"
int rep,i,nA=0,nf=0,min,max;
aide TA[1000],A;
famille Tf[1000];
int main()
{
do
{
 printf("\n*************************************menu**********************************\n");
 printf("1-ajouter aide\n");
 printf("2-afficher les aides\n");
 printf("3-ajouter famille\n");
 printf("4-afficher les familles\n");
 printf("6- comparison min max");
 printf("7- afficher le min le max");

do
  {
      printf("\nVeuiller choisir une reponse\n");
      scanf("%d",&rep);

  }while (!(rep>=1 && rep <=7 ));
  switch(rep)
  {
      case 1 :{saisir_aide(&A);
             ajouter_aide(TA,&nA,A);
             printf("%d",nA);}break;
      case 2 :{afficher_aide(TA,nA);}break;
      case 3 :{ajouter_famille(Tf,&nf);}break;
      case 4 :{ afficher_famille(Tf,nf);}break;
      case 5 :{printf("good bye");}break;
      case 6: {(TA,nA,&min,&max);}break;
      case 7:{printf("%d%d",min,max);}break;
  }


}while (!(rep==5));
    return 0;

}
