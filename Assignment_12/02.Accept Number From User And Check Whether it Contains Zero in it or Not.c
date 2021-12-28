#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int Num = 0;

    while(iNo != 0)
    {

        Num = iNo % 10;

        if(Num == 0)
        {
            return True;
        }
        iNo = iNo /10;
    }

    return False;
}
int main()
{
    int iValue = 0;
    BOOL bRet =False;

    printf("\n Enter A Number =");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == True)
    {
        printf("\n It Contains Zero");
    }
    else
    {
        printf("\n There is No Zero");
    }

    getch();
    return 0;
}
