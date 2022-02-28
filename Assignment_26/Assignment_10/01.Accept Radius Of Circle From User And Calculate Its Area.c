#include<stdio.h>
#include<conio.h>

#define PI 3.14

double CircleArea(float Radius)
{
   float Area = 0.0;

   Area = PI * Radius * Radius;

   return Area;
}

int main()
{
    float fValue = 0;

    printf("\n Enter A Radius Of Circle =>");
    scanf("%f",&fValue);

    printf("\n The Area of Circle is = %0.4f",CircleArea(fValue));

    getch();
    return 0;
}
