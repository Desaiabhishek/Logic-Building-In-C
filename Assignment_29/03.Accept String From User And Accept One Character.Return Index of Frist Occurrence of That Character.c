#include<stdio.h>
#include<conio.h>

int FristChar(char *str,char Ch)
{
    int i = 0;

    while(str[i] >= '\0')
    {
        if(str[i] == Ch)
        {
            return i;
        }
        i++;
    }
   return -1;
}

int main()
{
    char Arr[20];
    char Ch;

    printf("\n Enter A String =");
    gets(Arr);

    printf("\n Enter A Character =");
    scanf("%c",&Ch);

    printf("\n Character Index Location is %d.",FristChar(Arr,Ch));

    getch();
    return 0;
}
