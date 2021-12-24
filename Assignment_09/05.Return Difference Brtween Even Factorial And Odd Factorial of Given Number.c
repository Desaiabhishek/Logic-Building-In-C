#include<stdio.h>
#include<conio.h>

int FactorialDiff(int iNo)
{
   int Efact = 1, Ofact = 1;

   if(iNo < 0)
   {
       iNo = -iNo;
   }

   while(iNo != 0)
   {
       if(iNo%2 == 0)
       {
           Efact = Efact * iNo;
       }
       else
       {
           Ofact = Ofact * iNo;
       }

       iNo--;
   }
   return Efact - Ofact;
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number =>");
    scanf("%d",&iValue);

    printf("\n Difference Between Even And Odd Factorial is %d",FactorialDiff(iValue));

    getch();
    return 0;
}
