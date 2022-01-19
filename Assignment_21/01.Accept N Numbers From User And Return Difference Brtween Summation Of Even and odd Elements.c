#include<stdio.h>
#include<conio.h>

int Diff(int Arr[],int iLength)
{
    int i = 0, OSum = 0, ESum = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i]%2 == 0)
        {
            ESum = ESum + Arr[i];
        }
        else
        {
            OSum = OSum + Arr[i];
        }
    }
    return (ESum - OSum);

}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *P = NULL;

    printf("\n Enter Numbers of Elements ="),
    scanf("%d",&iSize);

    P = (int*)malloc(iSize * sizeof(int));

    if(P == NULL)
    {
        printf("\n Unable To Allocate Memory");
        return -1;
    }

   printf("\n\t Enter %d Elements =>\n",iSize);

   for(iCnt = 0;iCnt < iSize; iCnt++)
   {
       printf("\n Enter %d Element =",iCnt+1);
       scanf("%d",&P[iCnt]);
   }

   iRet = Diff(P,iSize);

   printf("\n Result is %d",iRet);

   free(P);

   getch();
   return 0;
}
