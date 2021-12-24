#include<stdio.h>
#include<conio.h>

int EvenFactorial(int iNo)
{
    int i = 0, Fact = 1;

    if( iNo < 0)
    {
        iNo = -iNo;
    }
     for(i = 1; i <= iNo; i++)
     {
         if(i%2 == 0)
         {
             Fact = Fact * i;
         }
     }
     return Fact;
}

int main()
{
    int iValue = 0;

    printf("\n Enter Any Number =>");
    scanf("%d",&iValue);

    printf("\n Even Factorial of Number is %d",EvenFactorial(iValue));

    getch();
    return 0;
}
