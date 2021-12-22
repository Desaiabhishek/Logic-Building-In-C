#include<stdio.h>
#include<conio.h>

void MultDisplay(int iNo)
{
  int i = 0;

  for (i = 1; i <= 5; i++)
  {

      printf(" %d ",iNo * i);

  }
}

int main()
{
 int iValue = 0;

 printf("\n Enter A Number =>");
 scanf("%d",&iValue);

 MultDisplay(iValue);

 getch();
 return 0;

}
