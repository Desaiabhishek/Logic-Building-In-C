#include<stdio.h>
#include<conio.h>

void FctRev(int iNo)
{
   int i = 0;

   for(i = iNo/2 ; i >= 0; i--)
   {
       if(iNo % i == 0)
       {
           printf("%d  ",i);
       }
   }
}

int main()
{
    int iValue = 0;

    printf("\n Enter Number =>");
    scanf("%d",&iValue);

    FctRev(iValue);

    getch();
    return 0;
}

