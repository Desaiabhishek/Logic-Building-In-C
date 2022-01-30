#include<stdio.h>
#include<conio.h>

int LastOcc(int Arr[],int iLength, int iNo)
{
  int i = 0;

  for(i = iLength; 0 < i; i--)
  {
      if(Arr[i] == iNo)
      {
          return i;
      }
  }
  return -1;
}
int main()
{
    int N = 0, iCnt = 0, iValue = 0;
    int *P = NULL;

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

      printf("\n Given Number Index is %d.",LastOcc(P,N,iValue));
    free(P);

    getch();
    return 0;
}
