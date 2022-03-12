#include<stdio.h>
#include<conio.h>

int CntWhitesp(char *str)
{
    int Cnt = 0;

  while( *str != '\0')
  {
      if( *str == 32)
      {
          Cnt++;
      }
      *str++;
  }
  return Cnt;
}

int main()
{
    char Arr[20];

    printf("\n Enter A String =");
    scanf("%[^\n]",Arr);

    printf(" \n Given String White Spaces is = %d",CntWhitesp(Arr));

    getch();
    return 0;
}
