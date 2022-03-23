#include<stdio.h>
#include<conio.h>

int CntChar(char *str,char Ch)
{
int Cnt = 0;

  while( *str != '\0')
  {
      if( *str == Ch)
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
    char Ch;

    printf("\n Enter A String =");
    gets(Arr);

    printf("\n Enter The Character =");
    scanf("%c",&Ch);

    printf("\n Character Frequency is %d",CntChar(Arr,Ch));

    getch();
    return 0;
}
