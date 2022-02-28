#include<stdio.h>
#include<conio.h>

double FhtoCs(float Temp)
{
  return (Temp - 32) * 5/9;
}

int main()
{
    float Value = 0.0;

    printf("\n Enter Temperature in Fahrenheit =>");
    scanf("%f",&Value);

    printf("\n Fahrenheit Convert to Celsius = %f",FhtoCs(Value));

    getch();
    return 0;
}

