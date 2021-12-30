#include<stdio.h>
#include<conio.h>

int CountDiff(int iNo)
{
  int ESum = 0, OSum = 0;
  int Num = 0;

  while(iNo != 0)
  {
      Num = iNo % 10;

      if(Num%2 == 0)
      {
          ESum = ESum + Num;
      }
      else
      {
          OSum = OSum + Num;
      }
      iNo = iNo /10;
  }

  return ESum - OSum;
}
int main()
{
    int iValue = 0;

    printf("\n Enter A Number =");
    scanf("%d",&iValue);

    printf("\n Difference Count = %d",CountDiff(iValue));

    getch();
    return 0;
}
