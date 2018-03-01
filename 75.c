#include<stdio.h>
#include<string.h>
int main()
{
char a[20];
char s;
printf("enter the string:\n");
scanf("%s",a);
s=strlen(a);
if(s%2==0)
{
a[s/2]='*';
a[(s/2)-1]='*';
}
else
{
  a[s/2]='*';
  printf("%s",a);
}
return 0;
}
