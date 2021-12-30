#include<stdio.h>
#include<conio.h>

int CountRange(int iNo)
{
  int i = 0, Num = 0;

  while(iNo != 0)
  {
      Num = iNo % 10;

      if(Num > 3 && Num < 7)
      {
          i++;
      }
      iNo = iNo / 10;
  }
  return i;
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number =");
    scanf("%d",&iValue);

    printf("\n Count of Digits in Between 3 And 7 is %d",CountRange(iValue));

    getch();
    return 0;
}
