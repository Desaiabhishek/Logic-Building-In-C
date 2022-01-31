#include<stdio.h>
#include<conio.h>

void Range(int Arr[],int iLength, int iStart,int iEnd)
{
  int i = 0;

  for(i = 0; i < iLength; i++)
  {
      if(Arr[i] > iStart && Arr[i] < iEnd)
      {
          printf(" %d ",Arr[i]);
      }
  }
}
int main()
{
    int N = 0, iCnt = 0, iStat = 0,iEnd = 0;
    int *P = NULL;

    printf("\n Enter Number of Elements =");
    scanf("%d",&N);

    printf("\n Enter The Start Point =");
    scanf("%d",&iStat);

    printf("\n Enter The End Point =");
    scanf("%d",&iEnd);

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

    Range(P,N,iStat,iEnd);

    free(P);

    getch();
    return 0;
}
