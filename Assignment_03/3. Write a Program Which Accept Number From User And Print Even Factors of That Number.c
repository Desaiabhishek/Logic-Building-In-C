#include<stdio.h>
#include<conio.h>

void DispalyEvenFactor(int iNo)
{
    int i = 0;

        if( iNo <= 0)
        {
            iNo = -iNo;
        }

        i = iNo / 2;

        while(i != 0)
        {
            if(iNo %i == 0 && i % 2 == 0)
        {
            printf("\n &d",i);
        }
        i--;
    }
}
int main()
{
    int iValue = 0;

    printf("\n Enter A Number =");
    scanf("%d",iValue);

    DispalyEvenFactor(iValue);

    getch();
    return 0;
}
