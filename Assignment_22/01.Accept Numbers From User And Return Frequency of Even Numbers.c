#include<stdio.h>
#include<conio.h>

int CntEven(int Arr[],int iLength)
{
    int i = 0, Cnt = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i]%2 == 0)
        {
            Cnt++;
        }
    }
    return Cnt;
}
int main()
{
   int iSize = 0, iCnt = 0;
   int *P = NULL;

   printf("\n Enter Number of Elements =");
   scanf("%d",&iSize);

   P = (int*)malloc(iSize * sizeof(int));

   if(P == NULL)
   {
     printf("\n Unable to Allocate Memory ");
     return -1;
   }

   printf("\n\t Enter %d Elements =>\n",iSize);

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
       printf("\n Enter %d Elements =",iCnt+1);
       scanf("%d",&P[iCnt]);
   }

   printf("\n Even Count in Elements is %d.",CntEven(P,iSize));

   free(P);

   getch();
   return 0;
}
