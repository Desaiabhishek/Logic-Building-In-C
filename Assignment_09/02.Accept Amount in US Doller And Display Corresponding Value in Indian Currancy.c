#include<stdio.h>
#include<conio.h>

#define Rupees 70

int DollarToINR(int iNo)
{
  return iNo * Rupees;
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number Of USD =>");
    scanf("%d",&iValue);

    printf("\n Value in INR is %d",DollarToINR(iValue));

    getch();
    return 0;
}
