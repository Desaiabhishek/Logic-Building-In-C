

#include<stdio.h>
#include<conio.h>

int CountTwo(int iNo)
{
  int i = 0, Num = 0;

  while(iNo != 0)
  {
      Num = iNo %10;

      if(Num == 4)
      {
          i++;
      }
      iNo = iNo/10;
  }
  return i;
}
int main()
{
    int iValue = 0;

    printf("\n Enter A Number =");
    scanf("%d",&iValue);

    printf("\n Four Count in Digit is %d",CountTwo(iValue));

    getch();
    return 0;
}
