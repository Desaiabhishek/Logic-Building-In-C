#include<stdio.h>
#include<conio.h>

int FactDiff(int iNo)
{
    int i = 0, Fsum = 0, NFsum = 0;

    for (i = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            Fsum = Fsum + i;
        }
        else
        {
            NFsum = NFsum + i;
        }
    }

    return  Fsum - NFsum;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("\n Enter A Number =>");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("\n Difference Between Factors And Non Factors is %d",iRet);

    getch();
    return 0;
}
