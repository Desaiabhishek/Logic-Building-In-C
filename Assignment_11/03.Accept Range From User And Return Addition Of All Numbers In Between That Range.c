#include<stdio.h>
#include<conio.h>

int RangeSum(int iSP,int iEP)
{
    int Sum = 0;

    if(iSP > iEP)
    {
        printf("\n Invalid Range");
    }

     Up:
   if(iSP <= iEP)
   {
     Sum = Sum + iSP;
     iSP++;

     goto Up;
   }

   return Sum;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\n Enter Staring Point =>");
    scanf("%d",&iValue1);

    printf("\n Enter Ending Point =>");
    scanf("%d",&iValue2);

    printf("\n Sum Is = %d",RangeSum(iValue1,iValue2));

    getch();
    return 0;
}
