#include<stdio.h>
int main()
{
char str[100];
int i,len;
printf("enter the string");
scanf("%s",str);
len=strlen(str);
for(i=len;i>=0;i--)
printf("%c\t",str[i]);
return 0;
}

