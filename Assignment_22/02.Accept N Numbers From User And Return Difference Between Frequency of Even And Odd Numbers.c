#include<stdio.h>
#include<conio.h>

int Frequency(int Arr[],int Size)
{
    int i = 0, Ecnt = 0, Ocnt = 0;

    for(i = 0; i < Size; i++)
    {
        if(Arr[i]%2 == 0)
        {
            Ecnt++;
        }
        else
        {
            Ocnt++;
        }
    }
    return Ecnt - Ocnt;
}
int main()
{
    int N = 0,iCnt = 0;
    int *P = NULL;

    printf("\n Enter Numbers Of Elements =");
    scanf("%d",&N);

    P = (int*)malloc(N * sizeof(int));

    if(P == NULL)
    {
        printf("\n Unable to Allocate Memory");
        return -1;
    }

     printf("\n\t Enter %d Elements => \n",N);

    for( iCnt = 0; iCnt < N; iCnt++)
    {
        printf("\n Enter %d Element =",iCnt+1);
        scanf("%d",&P[iCnt]);
    }

    printf("\n Frequency is %d",Frequency(P,N));

    free(P);

    getch();
    return 0;
}
