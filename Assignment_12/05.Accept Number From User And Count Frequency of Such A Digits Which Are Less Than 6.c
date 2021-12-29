

#include<stdio.h>
#include<conio.h>

int CountTwo(int iNo)
{
  int i = 0, Num = 0;

  while(iNo != 0)
  {
      Num = iNo %10;

      if(Num < 6)
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

    printf("\n  Count Of Less Than 6 Digit is %d",CountTwo(iValue));

    getch();
    return 0;
}
