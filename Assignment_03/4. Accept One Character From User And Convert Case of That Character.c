#include<stdio.h>
#include<conio.h>

void DisplyConvert(char Ch)
{
    if(Ch >= 'A' && Ch <= 'Z')
       {
       printf("%c",Ch + 32 );
       }
       else if (Ch >= 'a' && Ch <= 'z')
       {
           printf("%c",Ch - 32);
       }
}
int main()
{
    char cValue ='0';

    printf("\n Enter A Character =");
    scanf("%c",&cValue);

    DisplyConvert(cValue);

    getch();
    return 0;
}
