#include<stdio.h>
#include<math.h>
int main()
{
int i,n;
printf("enter the number");
scanf("%d",&n);
printf("tha factor are ");
for(i=1;i<=n;i++)
{
if((n%i)==0)
{
printf(" %d", i);
}
}
return 0;
}
