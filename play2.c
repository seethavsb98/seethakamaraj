#include<stdio.h>
int main()
{
int i,a,fact=1;
printf("enter the number");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
fact=fact*i;
}
printf("%d",fact);
}
