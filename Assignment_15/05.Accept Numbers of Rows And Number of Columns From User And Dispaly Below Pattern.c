#include<stdio.h>
#include<conio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
       for(j = 0; j <= iCol; j++)
       {
           printf(" %d ",i);
       }
       printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\n Enter A Number Of Rows & Columns =");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    getch();
    return 0;
}
