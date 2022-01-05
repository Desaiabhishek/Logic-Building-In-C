#include<stdio.h>
#include<conio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;
    char Ch = '/0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,Ch = 'a'; j <= iCol; j++,Ch++)
        {
            if(i%2 > 0)
            {
                printf(" %c ",Ch);
            }
            else
            {
                printf(" %d ",j);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\n Enter A Rows Number =");
    scanf("%d",&iValue1);

    printf("\n Enter A Columns Number =");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    getch();
    return 0;
}
