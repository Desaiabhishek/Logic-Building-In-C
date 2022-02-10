#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkAlpha(char Alpha)
{
    if((Alpha >= 65 && Alpha <= 90)||(Alpha >= 97 && Alpha <= 122) )
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

    if(ChkAlpha(Ch))
    {
        printf("\n It is Character");
    }
    else
    {
        printf("\n It is Not Character");
    }
    getch();
    return 0;
}
