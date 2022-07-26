#include <stdio.h>
#include <stdlib.h>
int coef_Maths=4,coef_PC=4,coef_Anglais=2 ,i=0,som_Maths=0,som_Pc=0,som_Anglais=0;
float  note_Maths[2],note_Pc[2],note_Anglais[2],moy_Maths,moy_Pc,moy_Anglais,Mg;
char Moussandiaye[10];
char saisi[20];
float note;
int verification()
{
    while(note=atoi(saisi)==0)
    {
        printf("veiller saisir un entier\n");
        scanf("%s",saisi);
    }
    if(note=atoi(saisi)!=0)
    {
        note=atoi(saisi);
        return note;
    }
}


int main ()
{
   
         printf("veuiller entrer votre nom\n");
         scanf("%s",&Moussandiaye[10]);


   
    for ( i = 0; i < 2; i++)
    {
         
         
         printf("Donner vos note_Maths[%d]:\n",i);
         scanf("%s",saisi);
         verification();
         
        som_Maths=som_Maths + note_Maths[i];

    }
    moy_Maths=(som_Maths*coef_Maths)/2;
    printf("la moyenne en maths est:%f\n",moy_Maths);

     for ( i = 0; i < 2; i++)
    {
        printf("Donner vos note_Pc[%d]:\n",i);
        scanf("%s",saisi);
        verification();
        som_Pc=som_Pc + note_Pc[i];

    }
    moy_Pc=(som_Pc*coef_PC)/2;
    printf("la moyenne en Pc est:%f\n",moy_Pc);
    for ( i = 0; i < 2; i++)
    {
        printf("Donner vos note_Anglais[%d]:\n",i);
        scanf("%s",saisi);
        verification();
        som_Anglais=som_Anglais + note_Anglais[i];

    }
    moy_Anglais=(som_Anglais*coef_Anglais)/2;
    printf("la moyenne en Anglais est:%f\n",moy_Anglais);
    Mg=(moy_Maths +moy_Pc +moy_Anglais)/(coef_Maths +coef_PC +coef_Anglais);
    if(Mg<10)
    {
        printf("la moyenne de Moussa est:%f ce qui est mediocre\n",Mg);
    }
    if(Mg==10)
    {
        printf("la moyenne de Moussa est:%f ce qui est passable\n",Mg);
    }

    if(Mg>12 && Mg<14)
    {
        printf("la moyenne de Moussa est:%f ce qui est tres bien\n",Mg);
    }

  if(Mg>14)
    {
        printf("la moyenne de Moussa est:%f ce qui est excellent\nr",Mg);
    }




    return 0;
    
     }
