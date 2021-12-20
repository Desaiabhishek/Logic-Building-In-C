
#include<stdio.h>
#include<conio.h>

int main()
{
    char Name[28];

    printf("\n Enter Your Full Name =>");
    scanf("%[^\n]",&Name);

    getch();

    printf("\n Your Name Is => %s",Name);

    getch();
    return 0;
}
