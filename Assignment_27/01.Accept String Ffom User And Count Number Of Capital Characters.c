
#include<stdio.h>
#include<conio.h>

int CapitalCnt(char *str)
{
    int iCnt = 0;

    while( *str != '\0')
    {
        if( *str >= 65 && *str <= 90)
        {
            iCnt++;
        }
        *str++;
    }
    return iCnt;
}

int main()
{
  char Arr[20];

  printf("\n Enter A String =");
  scanf("%[^\n]",Arr);

  printf("\n Given String Capital Count is = %d.",CapitalCnt(Arr));

  getch();
  return 0;
}
