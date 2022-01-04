#include<stdio.h>
#include<conio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char Ch = '/0';

    for(Ch = 'A', i = 1; i <= iRow; i++,Ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf(" %c ",Ch);
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
