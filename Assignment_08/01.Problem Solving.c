#include<stdio.h>
#include<conio.h>

void Number(int iNo)
{
 if( iNo <= 50)
 {
     printf("\n %d Number is Small",iNo);
 }
 else if(iNo > 50 && iNo <= 100)
 {
     printf("\n %d Number is Medium",iNo);
 }
 else
 {
     printf("\n %d Number is Large",iNo);
 }


}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number =>");
    scanf("%d",&iValue);

    Number(iValue);

    getch();
    return 0;
}
