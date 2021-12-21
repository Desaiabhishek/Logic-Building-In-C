#include<stdio.h>
#include<conio.h>

typedef int BOOL;

#define True 1
#define False 2

BOOL ChkEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
    {
        return True;
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0 ;
    BOOL bRet = False;

    printf("\n Enter Two Numbers =>");
    scanf("%d%d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if (bRet == True)
    {
        printf("\n Both Numbers Are Equal ");
    }
    else
    {
        printf("\n Both Numbers Are Not Equal");
    }
    getch();
    return 0;
}

