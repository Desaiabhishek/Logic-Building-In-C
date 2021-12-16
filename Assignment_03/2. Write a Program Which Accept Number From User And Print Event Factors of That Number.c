#include<stdio.h>
#include<conio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

   if (iNo < 0)
   {
       iNo = -iNo;
       i = iNo/2;
   }


    for(i = 1; i <= iNo; i ++)
    {
        if (i%2 == 0 && iNo% i == 0)
        {
            printf("\n%d",i);

        }
    }
}
int main()
{
    int iValue = 0;

    printf("\n Enter A Number =");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}
