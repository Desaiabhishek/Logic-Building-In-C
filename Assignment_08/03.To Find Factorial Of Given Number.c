#include<stdio.h>
#include<conio.h>

int Factorial(int iNo)
{
    int  Fact = 1;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(iNo > 1)
    {
       Fact = Fact * iNo;

        iNo--;
    }

       return Fact;
}

int main()
{
    int iValue = 0;

     printf("\n Enter A Number =>");
     scanf("%d",&iValue);

       printf("\n Factorial Of %d is = %d",iValue,Factorial(iValue));

       getch();
       return 0;
}
