#include<stdio.h>
#include<conio.h>

void Dispaly(char *str)
{
  while( *str != '\0')
  {
      if( *str >= 97 && *str <= 122)
      {
          *str = *str - 32;
      }
      else
      {
          *str = *str;
      }
      *str++;
  }
}

int main()
{
    char Arr[20];

    printf("\n Enter A String =");
    scanf("%[^\n]",Arr);

    Dispaly(Arr);

    printf("\n Modified String is %s",Arr);

    getch();
    return 0;
}
