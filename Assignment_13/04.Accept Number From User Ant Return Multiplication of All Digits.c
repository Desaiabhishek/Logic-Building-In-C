#include<stdio.h>
#include<conio.h>

int MultDigit(int iNo)
{
    int i = 1,Num = 0;

    while(iNo != 0)
    {
        Num = iNo %10;

        if(Num != 0)
        {
            i = i * Num;
        }
        iNo = iNo /10;
    }
    return i;
}
int main()
{
    int iValue = 0;

    printf("\n Enter A Number =");
    scanf("%d",&iValue);

    printf("\n Multiplication is %d",MultDigit(iValue));

    getch();
    return 0;
}
