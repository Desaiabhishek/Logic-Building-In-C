#include<stdio.h>
#include<conio.h>

int CntEven(int iNo)
{
  int i = 0, Num = 0;

  while(iNo != 0)
  {
      Num = iNo % 10;

      if(Num%2 == 0)
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

    printf("\n Even Count is %d ",CntEven(iValue));

    getch();
    return 0;
}
