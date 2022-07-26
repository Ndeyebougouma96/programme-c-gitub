#include <stdio.h>
#include <stdlib.h>
 int password=1000,i=0;
 int reponse;
 char saisi[20];
int verification()
{
while (reponse=atoi(saisi)==0)
{
    printf("veiller saisir un nombre\n");
    scanf("%s",saisi);
}
if(reponse=atoi(saisi)!=0)
{
    reponse = atoi(saisi);
    return reponse;
}
}
int main()
{

   

    
        printf("veuiller enter un mot de passe\n");
        scanf("%s",saisi);
        verification();
        if(reponse==password)
        {
            printf("le code secret est correct\n");
            return 0;
        }
    
    printf("veuiller entrer un mot de passe\n");
    scanf("%s",saisi);
    verification();
    if(reponse!=password)
    {
        printf("le code est incorrect reessayer\n");
    }
    for (i =2;i>0;i--)
    {
        printf("veuiller entrer un mot de passe\n");
        scanf("%s", saisi);
        verification();
        if (reponse != password)
        {
            printf("le code est incorrect,nombre de tentative depasser\n");
            printf("bloquer le programme\n");
            return 0;
        }
    }
 
    
    }



