#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo%2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int iValue = 0, iCnt = 0;
    BOOL bRet = False;

    printf("\n Enter A Number = ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if ( bRet ==  True)
    {
      printf("\n %d Number is Even",iValue);

    }
    else
    {
      printf("\n %d Number is Odd",iValue);

    }

    getch();
    return 0;

}
