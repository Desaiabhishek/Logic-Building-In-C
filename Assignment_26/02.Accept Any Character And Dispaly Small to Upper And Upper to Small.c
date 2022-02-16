
#include<stdio.h>
#include<conio.h>

void Dispaly(char Ch)
{
    if(Ch >= 65 && Ch <= 90)
    {
        Ch = Ch +32;
    }
    else if(Ch >= 97 && Ch <= 122)
    {
        Ch = Ch-32;
    }
    printf("\t %c ",Ch);
}

int main()
{
    char Ch = '\0';

    printf("\n Enter A Character =");
    scanf("%c",&Ch);

    Dispaly(Ch);

    getch();
    return 0;
}
