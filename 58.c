#include "stdio.h"

int main(void)
{
  int x,y;
  printf("enter the number");
  scanf("%d%d",&x,&y);
  x=x^y;
  y=x^y;
  x=x^y;
  printf("after swap number%d %d",x,y);
}
