#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    switch (iNo)
    {
    case 0:
        printf("\n Zero");
        break;

    case 1:
        printf("\n One");
        break;

    case 2:
        printf("\n Two");
        break;

    case 3:
        printf("\n Three");
        break;

    case 4:
        printf("\n Four");
        break;

    case 5:
        printf("\n Five");
        break;

    case 6:
        printf("\n Six");
        break;

    case 7:
        printf("\n Seven");
        break;

    case 8:
        printf("\n Eight");
        break;

    case 9:
        printf("\n Nine");
        break;

    default :
        printf("Invalid Number !!!");
        break;
    }
}
int main ()
{
    int iValue = 0;

    printf("\n Enter A Single Digit =>");
    scanf("%d",&iValue);

    Display(iValue);

    getch();
    return 0;
}
