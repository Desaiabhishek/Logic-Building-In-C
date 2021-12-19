#include<stdio.h>
#include<conio.h>

void Nonfact(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        if(iNo % i != 0)
        {
          printf("%d  ",i);
        }
    }
}
int main()
{
    int Cnt = 0;

    printf("\n Enter A Number =>");
    scanf("%d",&Cnt);

    Nonfact(Cnt);

    getch();
    return 0;
}
