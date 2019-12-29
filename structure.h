#ifndef STRUCTURE_H_INCLUDED
#define STRUCTURE_H_INCLUDED

typedef struct aide
{
    char designation[20];
    char type[20];
    int quantite;
}aide;
typedef struct famille
{
   int CIN;
   int nbr;
   char delegation[20];
}famille;

#endif // STRUCTURE_H_INCLUDED
