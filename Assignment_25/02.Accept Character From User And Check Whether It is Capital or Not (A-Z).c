#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkCapital(char Alpha)
{
    if(Alpha >= 65 && Alpha <= 90)
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

    printf("\n Enter The Character =");
    scanf("%c",&Ch);

    if(ChkCapital(Ch))
    {
        printf("\n It is Capital Character");
    }
    else
    {
        printf("\n It is Not Capital Character");
    }
    getch();
    return 0;
}
