#include<stdio.h>
#include<conio.h>

int SumNonFact(int iNo)
{
    int i = 0,Sum = 0;

    for(i = 1; i <= iNo; i++)
    {
        if(iNo % i != 0)
        {
            Sum = Sum + i ;

        }
    }
     return Sum;
}
int main()
{
    int Cnt = 0;
    int iRet = 0;

    printf("\n Enter A Number =>");
    scanf("%d",&Cnt);

     iRet = SumNonFact(Cnt);

   printf("\n Summation Of Non Factors is %d",iRet);

    getch();
    return 0;
}
