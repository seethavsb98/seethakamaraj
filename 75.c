#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
char s;
printf("enter the string:\n");
scanf("%s",str);
s=strlen(str);
if(s%2==0)
{
str[s/2]='*';
str[(s/2)-1]='*';
}
else
{
  str[s/2]='*';
  printf("%s",str);
}
return 0;
}
