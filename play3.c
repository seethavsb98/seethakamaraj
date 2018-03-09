#include<stdio.h>
int main()
{
int a,r,n=0;
printf("enter the number");
scanf("%d",&a);
while(a!=0)
{
n=a%10;
r=r*10+n;
a=a/10;
}
printf("%d",r);
return 0;
}
