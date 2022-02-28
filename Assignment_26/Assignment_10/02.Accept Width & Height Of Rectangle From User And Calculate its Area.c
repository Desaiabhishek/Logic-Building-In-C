#include<stdio.h>
#include<conio.h>

double RectArea(float Width,float Height)
{
  return Width * Height;
}

int main()
{
    float fValue1 = 0, fValue2 = 0;

    printf("\n Enter A Width of Rectangle =>");
    scanf("%f",&fValue1);

    printf("\n Enter A Height of Rectangle =>");
    scanf("%f",&fValue2);

    printf("\n Area Of Rectangle is = %0.3f",RectArea(fValue1,fValue2));

    getch();
    return 0;
}
