#include "stdio.h"

int main(void)
{
  int a[10],i ,num,max;
    printf("enter the number");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    scanf("%d",&a[i]);
     max= a[0];
     for(i=0;i<num;i++){
     if(a[i]>max)
     {
       max= a[i];
     }
     }
     printf("enter the largest number %d",max);
     
     

}
