
#include<stdio.h>
#include<conio.h>

void Dispaly(int iNo)
{
    while(iNo  > 0 )
    {
        printf(" * ");
        iNo--;
    }
}

int main()
{
    int iValue = 0 ;
    printf("\n Enter Number =");
    scanf("%d",&iValue);

    Dispaly(iValue);

    getch();
    return 0;
}
