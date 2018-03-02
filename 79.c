#include<stdio.h>
int main()
{
int a,b,l,r;
scanf("%d %d",&a,&b);
l=a*b;
for(r=0;r<l;r++)
{
if(l==(r*r))
{
printf("\n YES");
return 0;
}
}
printf("no");
}
