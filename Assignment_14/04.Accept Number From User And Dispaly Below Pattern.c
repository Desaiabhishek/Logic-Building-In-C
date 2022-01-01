#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{
    int i = 0;

   for(i = 1; i <= iNo; i++)
   {
       printf("  #   %d   *  ",i);

   }
}
int main()
{
    int iValue = 0;

    printf("\n Enter A Number of Elements =");
    scanf("%d",&iValue);

    Pattern(iValue);

    getch();
    return 0;
}
