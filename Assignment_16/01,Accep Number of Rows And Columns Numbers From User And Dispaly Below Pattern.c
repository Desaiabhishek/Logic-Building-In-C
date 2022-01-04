
#include<stdio.h>
#include<conio.h>

void Pattern(int iRow , int iCol)
{
  int i = 0, j = 0;
  char Ch = '/0';
  for(i = 1; i <= iRow; i++)
  {
      for(Ch = 'A',j = 1; j <= iCol; j++,Ch++)
      {
          printf(" %c ",Ch);
      }
      printf("\n");
  }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\n Enter A Number Rows =");
    scanf("%d",&iValue1);

    printf("\n Enter A Number Columns =");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    getch();
    return 0;
}
