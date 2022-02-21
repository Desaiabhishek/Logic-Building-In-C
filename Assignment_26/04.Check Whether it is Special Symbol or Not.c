#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int bool;

bool Check(char Ch)
{
    if(Ch >= 65 && Ch <= 90)
    {
        return False;
    }
    else if(Ch >= 97 && Ch <= 122)
    {
        return False;
    }
    else if(Ch >= 49 && Ch <= 57)
    {
        return False;
    }
    else
    {
        return True;
    }
}
int main()
{
    char Ch = '\0';

    printf("\n Enter The Character =");
    scanf("%c",&Ch);

    if(Check(Ch))
    {
      printf("\n Given Character Is Special Symbol.");
    }
    else
    {
        printf("\n It is Not A Special Symbol.");
    }
    getch();
    return 0;
}
