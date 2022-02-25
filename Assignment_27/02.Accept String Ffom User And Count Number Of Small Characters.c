
#include<stdio.h>
#include<conio.h>

int SmallCnt(char *str)
{
    int iCnt = 0;

    while( *str != '\0')
    {
        if( *str >= 97 && *str <= 122)
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

  printf("\n Given String Small Count is = %d.",SmallCnt(Arr));

  getch();
  return 0;
}
