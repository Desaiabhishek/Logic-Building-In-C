#include<stdio.h>
#include<conio.h>

#define True 1
#define False 2

typedef int BOOL;

BOOL Check(int Arr[],int iLength, int iNo)
{
  int i = 0;

  for(i = 0; i < iLength; i++)
  {
      if(Arr[i] == iNo)
      {
          return True;
      }
  }
  return False;
}
int main()
{
    int N = 0, iCnt = 0, iValue = 0;
    int *P = NULL;
    BOOL  iRet = False;

    printf("\n Enter Number of Elements =");
    scanf("%d",&N);

    printf("\n Enter The Number =");
    scanf("%d",&iValue);

    P = (int*)malloc(N * sizeof(int));

    if(P == NULL)
    {
        printf("\n Unable to Allocate Memory");

        return -1;
    }

    printf("\n\t Enter %d Elements =>\n",N);

    for(iCnt = 0; iCnt < N; iCnt++)
    {
        printf("\n Enter %d Element =",iCnt+1);
        scanf("%d",&P[iCnt]);
    }

    iRet = Check(P,N,iValue);

    if(iRet == True)
    {
      printf("\n Number is Present");
    }
    else
    {
        printf("\n Number is Not Present");
    }
    free(P);

    getch();
    return 0;
}
