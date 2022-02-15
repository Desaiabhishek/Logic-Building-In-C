#include<stdio.h>
#include<conio.h>

void Dispaly(int Ch)
{
    printf("\n =============ASCII TABLE===============");

    while(Ch <= 255)
    {
       printf("\n\t %d = %c ",Ch,Ch);
       Ch++;
    }
      printf("\n =============ASCII TABLE===============");
}
int main()
{
    int Ch = '\0';

    Dispaly(Ch);

    getch();
    return 0;
}
