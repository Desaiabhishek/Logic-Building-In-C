#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int bool;

bool ChkVowel(char *str)
{
  while( *str != '\0')
  {
      if( *str == 'A' || *str == 'a' || *str == 'E' || *str == 'e' || *str == 'I' || *str == 'i' || *str == 'O' || *str == 'o' || *str == 'U' || *str == 'u' )
      {
          return True;
      }
      *str++;
  }
  return 0;
}

int main()
{
   char Arr[20];

   printf("Enter A String =");
   scanf("%[^\n]",Arr);

   if(ChkVowel(Arr))
   {
       printf("\n Contains Vowels.");
   }
   else
   {
       printf("\n Not Contains Vowels.");
   }

   getch();
   return 0;
}
