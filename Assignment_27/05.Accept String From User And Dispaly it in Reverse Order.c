#include<stdio.h>
#include<conio.h>

void Reverse(char * str)
{
   char Rstr[20];
   int i = 0, j= 0;

   while(str[i] != '\0')
   {
       i++;
   }
   i = i-1;

   while(i >= 0)
   {
       Rstr[j] = str[i];

       i--;
       j++;
   }

   printf("\n Reverse String is = %s",Rstr);

}

int main()
{
    char Arr[20];

    printf("Enter A String =");
    scanf("%[^\n]",Arr);

    Reverse(Arr);

    getch();
    return 0;
}
