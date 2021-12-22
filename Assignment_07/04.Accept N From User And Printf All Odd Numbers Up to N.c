#include<stdio.h>
#include<conio.h>

void OddDisplay(int iNo)
{
  int i = 0;

  for (i = 1; i <= iNo; i++)
  {
      if( i % 2 != 0)
      {
          printf(" %d ",i);
      }
  }
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number =>");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    getch();
    return 0;

}
