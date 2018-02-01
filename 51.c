#include<stdio.h>
int main()
{
int a,b,c,sum=0;
printf("enter the number");
scanf("%d",&a);
while(a>=1)
{
  b=a%10;
  sum=(sum*10)+b;
  a=a/10;
}
while(sum>=1)
{
  c=sum%10;
  printf("\t%d",c);
  sum=sum/10;
}
}

