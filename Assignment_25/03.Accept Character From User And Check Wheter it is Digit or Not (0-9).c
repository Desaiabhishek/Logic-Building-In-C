#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkDigit(char Digit)
{
    if(Digit >= 48 && Digit <= 57)
    {
        return True;
    }
    else
    {
        return False;
    }

}
int main()
{
    char Ch = '\0';

    printf("\n Enter A Digit =");
    scanf("%c",&Ch);

    if(ChkDigit(Ch))
    {
        printf("\n It is Digit.");
    }
    else
    {
        printf("\n It is Not Digit.");
    }
    getch();
    return 0;
}
