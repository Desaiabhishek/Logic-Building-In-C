#include<stdio.h>
#include<conio.h>

void Dispaly(int iNo)
{
    int i = 0;
     if(iNo < 0)
     {
         iNo = -iNo;
     }

    for(i = 1; i <= iNo; i++)
    {
        if(i <= iNo/2)
        {
          printf(" * ");
        }
       else
        {
           printf(" # ");
        }

    }
}
int main()
{
    int iValue = 0;

    printf("\n Enter A Number =>");
    scanf("%d",&iValue);

    Dispaly(iValue *2);

    getch();
    return 0;
}
