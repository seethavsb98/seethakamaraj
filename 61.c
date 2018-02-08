#include "stdio.h"
int main() {
  char a[100];
  int i,count1,count2;
  printf("enter the binary number:");
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
    count1++;
    if(a[i]='1'&&a[i]='0')
    {
      count2++;
    }
  }
      if(count1==count2)
      {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  
}
