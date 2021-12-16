#include<stdio.h>
#include<conio.h>

void PrintEven(int iNo)
{
    int i = 0, j = 2;

    if (iNo <= 0)
    {
        return;
    }

    for(i = 1; i <= iNo; i++)
    {
        if (j%2 == 0)
        {
            printf(" %d",j);
            j++;
            j++;
        }
    }
}
int main()
{
    int iNo = 0;

    printf("\n Enter Any Number =");
    scanf("%d",&iNo);

    PrintEven(iNo);

    return 0;
}
