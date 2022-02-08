#include<stdio.h>
#include<conio.h>

void DigitsSum(int Arr[],int iLength)
{
  int i = 0, Sum = 0;

  for(i = 0; i < iLength; i++)
  {
      if(Sum != 0)
      {
          Sum = 0;
      }
    while(Arr[i] > 0)
    {
      Sum = Sum + (Arr[i]%10);
      Arr[i] = Arr[i]/10;
    }
    printf(" %d ",Sum);
  }

}
int main()
{
    int N = 0, iCnt = 0;
    int *P = NULL;

    printf("\n Enter Number of Elements =");
    scanf("%d",&N);

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

    DigitsSum(P,N);

    free(P);

    getch();
    return 0;
}
