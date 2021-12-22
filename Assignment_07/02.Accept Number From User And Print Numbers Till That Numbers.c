#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
    int i = 1;

  while(i <= iNo)
  {
      printf("  %d",i);

      i++;
  }
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number =>");
    scanf("%d",&iValue);

    Display(iValue);

    getch();
    return 0;
}
