#include<stdio.h>
#include<conio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
                if(i == 1 || j == 1 || i == iRow || j == iCol)
                {
                     printf(" * ");
                }
                else
                {
                    printf(" @ ");
                }

        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\n Enter A Rows Numbers =");
    scanf("%d",&iValue1);

    printf("\n Enter A Columns Numbers =");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    getch();
    return 0;
}
