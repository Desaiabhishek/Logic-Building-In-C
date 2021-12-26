#include<stdio.h>
#include<conio.h>

void RanDispalyEven(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
         printf("\n Invalid Range");
    }

  Up:
    if(iNo1 <= iNo2)
    {
        if(iNo1%2 == 0)
        {
            printf(" %d ",iNo1);
        }
        iNo1++;
         goto Up;
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\n Enter Start Number =>");
    scanf("%d",&iValue1);

    printf("\n Enter End Number =>");
    scanf("%d",&iValue2);

    RanDispalyEven(iValue1,iValue2);

    getch();
    return 0;

}
