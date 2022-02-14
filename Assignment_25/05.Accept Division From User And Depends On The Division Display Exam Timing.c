#include<stdio.h>
#include<conio.h>

void DispalySchedule(char Div)
{
    if(Div == 'A' || Div == 'a')
    {
        printf("\n Your Exam At 7 AM.");
    }
     else if(Div == 'B' || Div == 'b')
    {
        printf("\n Your Exam At 8.30 AM.");
    }
    else if(Div == 'C' || Div == 'c')
    {
        printf("\n Your Exam At 9.20 AM.");
    }
    else if(Div == 'D' || Div == 'd')
    {
        printf("\n Your Exam At 10.30 AM.");
    }
    else
    {
        printf("\n Enter Valid Division.");
    }
}
int main()
{
  char Ch = '\0';

  printf("\n Enter A Division(A,B,C,D) =");
  scanf("%c",&Ch);

  DispalySchedule(Ch);

  getch();
  return 0;
}

