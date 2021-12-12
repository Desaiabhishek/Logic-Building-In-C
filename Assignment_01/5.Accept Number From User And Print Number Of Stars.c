#include<stdio.h>
#include<conio.h>

void Accept(int NO)
{
    int Cnt = 0;

    for (Cnt = 1; Cnt <= NO; Cnt++)
    {
        printf("*");
    }
}

int main ()
{
    int Value = 0;

    printf("\n Enter Any Number =");
    scanf("%d",&Value);

    Accept(Value);

    return 0;
}
