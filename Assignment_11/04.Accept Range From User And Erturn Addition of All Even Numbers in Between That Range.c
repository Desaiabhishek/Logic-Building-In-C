#include<stdio.h>
#include<conio.h>

int RangeSumEven(int SP, int EP)
{
    int Sum = 0;

    if(SP > EP)
    {
        printf("\n Invalid Number !!!");
    }
    UP:

    if(SP <= EP)
    {
        if(SP%2 == 0)
        {
            Sum = Sum + SP;
        }
        SP++;
        goto UP;
    }

    return Sum;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\n Starting Point =");
    scanf("%d",&iValue1);

    printf("\n Ending Point = ");
    scanf("%d",&iValue2);

    printf("\n Sum Of Even Number = %d",RangeSumEven(iValue1,iValue2));

    getch();
    return 0;
}
