#include<stdio.h>
int main()
{
char c;
int islowercasevowel ,isuppercasevowel;
printf("enter an alphbets:  ");
scanf("%c",&c);
islowercasevowel=(c=="a"||c=="e"||c=="i"||c=="o"||c=="u");
is uppercasevowel=(c=="A"||c=="E"||c=="I"||c=="O"||c=="U");
if(islowercasevowel||isuppercasevowel)
{
printf("%c is a vowel.", c);
}
else
{
printf("c is a constant.",c);
}
return 0;
}
