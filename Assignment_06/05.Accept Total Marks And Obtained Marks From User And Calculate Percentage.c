
#include<stdio.h>
#include<conio.h>

float Percentage(float iNo1, float iNo2)
{
    float Per = 0.0;

     if(iNo1 >= iNo2)
   {
    Per = ( iNo2 / iNo1) * 100;
   }
   else
   {
       printf("\n Obtain Marks is Greater Than  Total Marks");
   }
    return Per;

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    float fRet = 0.0;

    printf("\n Enter Total Marks =>");
    scanf("%d",&iValue1);

    printf("\n Enter Obtain Marks =>");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("\n Your Percentage is %0.2f",fRet);

    getch();
    return 0;

}
