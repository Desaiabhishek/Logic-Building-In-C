#include<stdio.h>
#include<conio.h>

typedef int BOOL;

#define True 1

#define False 0

BOOL ChkGreater(int iNo)
{
    if (iNo > 100)
    {
        return True;
    }
    else
    {
        return False;
    }
}

int main()
{
   int iValue = 0;
   BOOL bRet = False;

   printf("\n Enter A Number => ");
   scanf("%d",&iValue);

   bRet = ChkGreater(iValue);

   if(bRet == 1)
   {
       printf("\n Given Number is Greater Than 100");
   }
   else
   {
       printf("\n Given Number Is Less Than 100");
   }

   getch();
   return 0;
}

