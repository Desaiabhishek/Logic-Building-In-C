
#include<stdio.h>
#include<conio.h>

void Dispaly(int iNo,int iFrequency)
{
    int Cnt = 0;

   for (Cnt = 0; Cnt < iFrequency; Cnt++)
    {
        printf(" %d",iNo);
    }


}
int main()
{
    int iValue = 0, iCount = 0;

    printf("\n Enter 1st Number =");
    scanf("%d",&iValue);

    printf("\n Enter 2nd Number =");
    scanf("%d",&iCount);

    Dispaly(iValue,iCount);

    return 0;

}
