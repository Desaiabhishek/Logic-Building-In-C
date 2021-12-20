
#include<stdio.h>
#include<conio.h>

int Tourist(int Km)
{
    int ino = 0;

    if(Km < 100)
    {
        return Km * 25;
    }
    else if (Km > 100)
    {
        ino = Km - 100;
        return ((ino * 15) + (100 * 25));
    }
}
int main ()
{
    int Km = 0, rent = 0;

    printf("\n Enter Running Kelometers =>");
    scanf("%d",&Km);

    rent = Tourist(Km);

    printf("\n Rent is => %d",rent);
    getch();
    return 0;
}
