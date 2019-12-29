#include"structure.h"
#include<string.h>
int i;
int verifier_exist(aide TA[],int nA,char designation[])
{
    for(i=0;i<nA;i++)
    {
        if (strcmp(designation,TA[i].designation)==0)
            return i;
    }
    return -1;
}
void saisir_aide(aide *A)
{
    printf("donner la  desingnation\n");
    scanf("%s",A->designation);

    do
    {
    printf("donner le type:matelas/couverture/dennree_alimentaire");
    scanf("%s",A->type);
    }while(!(((strcmp((*A).type,"mateles")==0)||(strcmp((*A).type,"couverture")==0)||(strcmp((*A).type,"alimentaire")==0))));
     printf("donner la quantite\n");
    scanf("%d",&A->quantite);
}
void ajouter_aide(aide TA[],int *nA, aide A)
{
    int k=verifier_exist(TA,*nA,A.designation);
    if (k==-1)
    {
        TA[*nA]=A;
        (*nA)++;
    }
    else
    {
        TA[k].quantite+=A.quantite;
    }
}
void afficher_aide(aide TA[],int nA)
{
  int i;
for(i=0;i<nA;i++)
{

    printf("%d %s %s",TA[i].quantite,TA[i].designation,TA[i].type);
}

}
void ajouter_famille(famille Tf[],int *nf)
{
    famille f;
    printf("donner cin");
    scanf("%d",&f.CIN);
    printf("donner nbr");
    scanf("%d",&f.nbr);
    printf("donner delegation");
    scanf("%s",f.delegation);

    Tf[*nf]=f;
        (*nf)++;

}
void afficher_famille(famille Tf[],int nf)
{
  int i;
for(i=0;i<nf;i++)
{
    printf("%d %d %s",Tf[i].CIN,Tf[i].nbr,Tf[i].delegation);
}
}
void comparison_aide(aide TA[],int nA,int *min,int *max)
{
    max=0; min=0 ; int i;
    for(i=0;i<nA;i++)
    {
        if (TA[i].quantite<TA[*min].quantite)
        {
            *min=i;
        }

    }
      for(i=0;i<nA;i++)
    {
        if (TA[i].quantite<TA[*max].quantite)
        {
            *max=i;
        }
    }

}













