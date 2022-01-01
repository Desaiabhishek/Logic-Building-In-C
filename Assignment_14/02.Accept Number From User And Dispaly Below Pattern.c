#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{
   while(iNo != 0)
   {
       printf("  %d   #  ",iNo);

       iNo--;
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
