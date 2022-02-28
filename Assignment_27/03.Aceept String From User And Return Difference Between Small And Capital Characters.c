
#include<stdio.h>
#include<conio.h>

int Difference(char *str)
{
    int i = 0, j = 0;

    while( *str != '\0')
    {
        if( *str >= 65 && *str <= 90)
        {
            i++;
        }

        if( *str >= 97 && *str <= 122)
        {
            j++;
        }
        *str++;
    }
    return i-j;
}

int main()
{
  char Arr[20];

  printf("\n Enter A String =");
  scanf("%[^\n]",Arr);

  printf("\n Given String Small Count is = %d.",Difference(Arr));

  getch();
  return 0;
}
