#include<stdio.h>
#include<conio.h>

int KiloToMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Kilometer = ");
    scanf("%d",&iValue);

    printf("\n Kilometer To Convert Meter is = %d",KiloToMeter(iValue));

    getch();
    return 0;
}
