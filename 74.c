#include<stdio.h>
int main()
{
float n,t;
int temp,N;
printf("enter the floating value:\n");
scanf("%d",&n);
temp=n;
t=temp+0.5;
if(n>t)
{
N=temp+1;
printf("rounded value=%d",N);
}
else
{
printf("rounded value=%d",temp);
}
return 0;
}
