#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int bool;

bool ChkChar(char *str,char Ch)
{

  while( *str != '\0')
  {
      if( *str == Ch)
      {
         return True;
      }

      *str++;
  }
return False;
}

int main()
{
    char Arr[20];
    char Ch = '\0';

    printf("\n Enter A String =");
    gets(Arr);

    printf("\n Enter The Character =");
    scanf("%c",&Ch);

     if(ChkChar(Arr,Ch))
     {
         printf("\n Given Character is Present in Given String.");
     }
     else
     {
         printf("\n Given Character is Not Present in Given String.");
     }

    getch();
    return 0;
}
