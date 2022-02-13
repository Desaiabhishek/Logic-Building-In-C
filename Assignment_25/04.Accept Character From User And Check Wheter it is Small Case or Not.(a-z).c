#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkSmall(char Alpha)
{
    if(Alpha >= 97 && Alpha <= 122)
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

    if(ChkSmall(Ch))
    {
        printf("\n It is Small Case Character.");
    }
    else
    {
        printf("\n It is Not Small Case Character.");
    }
    getch();
    return 0;
}
