#include<stdio.h>
#include<conio.h>

void Dispaly(int iNo)
{
    if ( iNo < 10 )
    {
        printf("\n Hello");
    }
    else
    {
        printf("\n Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter Number =");
    scanf("%d",&iValue);

    Dispaly(iValue);

    getch();
    return 0;
}
