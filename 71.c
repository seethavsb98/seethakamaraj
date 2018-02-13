#include<stdio.h>
#include<string.h>
int main()
{
  char str[10];
  int i,length;
  int flag=0;
printf("enter the string:");
scanf("%d",str);
length=strlen(str);
for(i=0;i<length/2;i++)
{
  if(str[i]!=str[length-i-1])
  {
    flag=1;
    break;
  }
}
    if(flag==0)
    {
    printf("yes",str);
  }
  else
  {
    printf("no",str);
  }
return 0;
}
