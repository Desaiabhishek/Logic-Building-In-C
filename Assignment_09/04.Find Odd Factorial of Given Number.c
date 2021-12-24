#include<stdio.h>
#include<conio.h>

int OddFactorial(int iNo)
{
  int Fact = 1;

  if(iNo < 0)
  {
      iNo = -iNo;
  }
  while(iNo != 0)
  {
      if(iNo%2 != 0)
      {
         Fact = Fact * iNo;
      }
      iNo--;
  }

  return Fact;
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number =>");
    scanf("%d",&iValue);

    printf("\n Odd Factorial of Given Number is %d",OddFactorial(iValue));

    getch();
    return 0;
}
