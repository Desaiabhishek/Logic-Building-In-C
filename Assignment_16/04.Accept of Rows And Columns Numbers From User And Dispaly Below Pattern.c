#include<stdio.h>
#include<conio.h>

void Pattern(int iRow, int iCol)
{
    int  j = 0;

    for(; iRow >= 1;iRow--)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf(" %d ",iRow);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\n Enter A Rows =");
    scanf("%d",&iValue1);

    printf("\n Enter A Columns =");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    getch();
    return 0;
}
