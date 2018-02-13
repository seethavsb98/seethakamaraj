#include<stdio.h>
#include<string.h>
int main()
{
  char s[10];
  int i,count;
  printf("enter the string:");
  scanf("%s",s);
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    {
      count=count+1;
    }
  }
  if(count!=0)
  {
    printf("yes",s);
  
  }
  return 0;
}
  
