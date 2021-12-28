#include<stdio.h>
#include<conio.h>

void DisplayDigit(int iNo)
{
    int Num = 0;
   if(iNo < 0)
   {
       iNo = -iNo;
   }

   while(iNo > 0)
   {
     Num = iNo%10;

     printf("\n %d",Num);

     iNo = iNo/10;
   }
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number =");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    getch();
    return 0;
}
