#include"stdio.h"
void main()
{
  int a,i,flag=0;
  printf("enter a number");
  scanf("%d",&a);
  for(i=2;i<=a/2;i++)
  {
    if(a%i==0)
    {
      flag=1;
      break;
    }
  } 
if(flag==0)
{
  printf("%d it is a prime number",a);
}
else
{
  printf("%d it is a not prime number",a);
}
return 0;
}


