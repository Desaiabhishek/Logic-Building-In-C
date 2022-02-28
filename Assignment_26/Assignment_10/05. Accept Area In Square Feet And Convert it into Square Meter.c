#include<stdio.h>
#include<conio.h>

double SqrMeter(float iNo)
{
    return iNo * 0.0929;
}

int main()
{
    float Value = 0.0;

    printf("\n Enter A In Square Feet =>");
    scanf("%f",&Value);

    printf("\n Square Feet Convert To Square Meter is = %f",SqrMeter(Value));

    getch();
    return 0;
}
