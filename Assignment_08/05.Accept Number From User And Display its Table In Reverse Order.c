#include<stdio.h>
#include<conio.h>

void TableRev(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 10; i >= 1; i--)
    {
        printf(" %d ",iNo * i);
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number =>");
    scanf("%d",&iValue);

    TableRev(iValue);

    getch();
    return 0;
}
