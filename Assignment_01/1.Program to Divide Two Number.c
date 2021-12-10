#include<stdio.h>
#include<conio.h>

int Divide(int No1, int No2)
{
    int Ans = 0;

    if (No2 > No1)
    {
        return -1;
    }
      Ans = No1 / No2;

    return Ans;
}
int main ()
{
    int Value1 = 0, Value2 = 0;
    int Ans = 0;

    printf("\n Enter Two Number =");
    scanf("%d%d",&Value1,&Value2);

    Ans = Divide(Value1,Value2);

    printf("\n Division is Two Number  = %d",Ans);

    getch ();
    return 0;

}
