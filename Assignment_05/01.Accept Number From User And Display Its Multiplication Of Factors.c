
#include<stdio.h>
#include<conio.h>

int MultFact(int iNo)
    {
      int i = 0, Mult = 1;

      for(i = 1; i <= iNo / 2; i++)
      {
          if(iNo % i == 0)
          {
              Mult = Mult * i;
          }
      }
     return Mult;
}

int main()
{
    int iValue = 0;

    printf("\n Enter Number =>");
    scanf("%d",&iValue);

     printf("\n Given Number Factors Multiplication is => %d",MultFact(iValue) );

    getch();
    return 0;
}
