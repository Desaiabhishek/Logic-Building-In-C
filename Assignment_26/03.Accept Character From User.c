/* 03.Accept Character From User. If it is Capital Then Display All The
Characters From The Input Characters Till Z. If Input Character is Small
Then Print All The Characters in Reverse Order Till a. In Other Cases
Return Directly.
*/

#include<stdio.h>
#include<conio.h>

void Dispaly(char Ch)
{
     if(Ch >= 65 && Ch <= 90)
    {
        while(Ch <= 90)
        {
            printf(" %c ",Ch);
            Ch++;
        }
    }
    else if(Ch >= 97 && Ch <= 122)
    {
        while(Ch >= 97)
        {
            printf(" %c ",Ch);
            Ch--;
        }
    }
    else
    {
        printf("\n You Are Entered Number Or Special Symbol.")
    }
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
