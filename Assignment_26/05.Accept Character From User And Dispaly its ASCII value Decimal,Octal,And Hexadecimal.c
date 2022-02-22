#include<stdio.h>
#include<Conio.h>

void Dispaly(char Ch)
{
    printf("\n Given Character \n Decimal Value => %d \n Octal Value => 0%o \n Hexadecimal Value => 0X%x",Ch,Ch,Ch);
}
int main()
{
    char Ch = '\0';

    printf("\n Enter The Character =");
    scanf("%c",&Ch);

    Dispaly(Ch);

    getch();
    return 0;
}
