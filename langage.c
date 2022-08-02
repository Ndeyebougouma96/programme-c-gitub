#include <stdio.h>
#include <stdlib.h>


int coef_Maths=4,coef_PC=4,coef_Anglais=2 ,i=0;
double  note_Maths[2],note_Pc[2],note_Anglais[2],moy_Maths,moy_Pc,moy_Anglais,Mg;
double som_Maths=0,som_Pc=0,som_Anglais=0;
char Nom[10];
char saisi[20];
double note;
int verification()
{
    while(note=atof(saisi)==0)
    {
        printf("veiller saisir un entier\n");
        scanf("%s",saisi);
    }
    if(note=atof(saisi)!=0)
    {
        note_Maths[i]=atof(saisi), note_Pc[i]=atof(saisi), note_Anglais[i]=atof(saisi);
        return note_Maths[i],note_Pc[i] ,note_Anglais[i];
    }
    
    
}


int main ()
{
   
         printf("veuiller entrer votre nom\n");
         fgets(Nom, 10, stdin);


   
    for ( i = 0; i < 2; i++)
    {
         
         
         printf("Donner vos note_Maths[%d] :\n",i+1);
         scanf("%s",saisi);  
verification();
    som_Maths=som_Maths +note_Maths[i];
   

          
    moy_Maths=(som_Maths*coef_Maths)/2;
     
}
printf("la moyenne en maths est %lf\n",moy_Maths);
     for ( i = 0; i < 2; i++)
    {
        printf("Donner vos note_Pc[%d]:\n",i+1);
        scanf("%s",saisi);
 verification();
        som_Pc=som_Pc + note_Pc[i];

  
    moy_Pc=(som_Pc*coef_PC)/2;
      }
      printf("la moyenne en pc est %lf\n",moy_Pc);
    for ( i = 0; i < 2; i++)
    {
        printf("Donner vos note_Anglais[%d]:\n",i+1);
        scanf("%s",saisi);
       verification();
        som_Anglais=som_Anglais + note_Anglais[i];
 
   
    moy_Anglais=(som_Anglais*coef_Anglais)/2;
     }
    printf("la moyenne en anglais est %lf\n",moy_Anglais);
    for( i=0; i<2;i++)
    {

    Mg=(moy_Maths +moy_Pc +moy_Anglais)/(coef_Maths +coef_PC +coef_Anglais);
    if(Mg<10)
    {
        printf("la moyenne est:%lf ce qui est mediocre\n",Mg);
    }
    if(Mg==10)
    {
        printf("la moyenne est %lf ce qui est passable\n",Mg);
    }

    if(Mg>12 && Mg<14)
    {
        printf("la moyenne est:%lf ce qui est tres bien\n",Mg);
    }

  if(Mg>14)
    {
        printf("la moyenne est:%lf ce qui est excellent\n",Mg);
    }
    
     }




    return 0;
    
     }
