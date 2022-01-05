#include<stdio.h>
#include<conio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, K = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++,K++)
        {
            if(K == 10)
            {
              K = 1;
            }
            printf(" %d ",K);
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
