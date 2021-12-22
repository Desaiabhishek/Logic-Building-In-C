
#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{

   if(iNo > 0)
   {

   while(iNo != 0)
   {
     printf(" $  * ");
     iNo--;
   }

   }
   else
   {
       while( iNo != 0)
       {
           printf(" $  * ");
           iNo++;
       }
   }
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number =>");
    scanf("%d",&iValue);

    Pattern(iValue);

    getch();
    return 0;
}
