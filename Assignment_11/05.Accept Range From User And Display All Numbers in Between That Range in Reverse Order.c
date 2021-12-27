#include<stdio.h>
#include<conio.h>

void RangeDisplayRev(int SP,int EP)
{
    if( EP < SP)
    {
        printf("\n Invalid Range");
    }

    Up:
  if(EP >= SP)
  {
      printf(" %d ",EP);
      EP--;
      goto Up;
  }
}
int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("\n Enter Start Point =");
  scanf("%d",&iValue1);

  printf("\n Enter End Point =");
  scanf("%d",&iValue2);

  RangeDisplayRev(iValue1,iValue2);

  getch();
  return 0;

}
