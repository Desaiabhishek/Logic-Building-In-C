#include<stdio.h>
#include<conio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int No)
{
    if (No % 5 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main ()
{
    int Value = 0;
    BOOL bRet = FALSE;

    printf("\n Enter Number =");
    scanf("%d",&Value);

    bRet = Check(Value);

    if (bRet == TRUE)
    {
        printf("\n Divisible By 5");
    }
    else
    {
        printf("\n Not Divisible By 5");
    }
    getch();
    return 0;
}
