#include<stdio.h>
#include<conio.h>

void DispalyDigit(char *str)
{
  while( *str != '\0')
  {
      if( *str >= 48 && *str <= 57)
      {
          printf("%c",*str);
      }
      *str++;
  }
}

int main()
{
    char Arr[20];

    printf("\n Enter A String =");
    scanf("%[^\n]",Arr);

    DispalyDigit(Arr);

    getch();
    return 0;
}
