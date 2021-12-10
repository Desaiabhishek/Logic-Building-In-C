#include<stdio.h>
#include<conio.h>

int Display()
{
    int i = 0;

    i = 5;

    while( 1 <= i)
        {
            printf("%d",i);
            i--;
        }
}

int main ()
{
    Display();

    getch();
    return 0;
}
