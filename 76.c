#include<stdio.h>
int main()
{
int n i,c=0;
printf("enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if((n%i)==0)
{
c++;
}
}
if(c==2)
{
printf("no,not a composite");
}
else
{
printf("yes,it is composite");
}
}
