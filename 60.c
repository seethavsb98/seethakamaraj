#include "stdio.h"
int main() {
  int n,a=0,b=1,c,i=1;
scanf("%d",&n);
printf("%d\t",b);
while(i<n)
{
c=a+b;
a=b;
b=c;
printf("%d\t",c);
i++;
}
return 0;
}
