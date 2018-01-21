#include <stdio.h>
 int main()
{
    char    str[100];
    intcountSpecialChar;
    int counter;
    countDigits countSpecialChar=0;
     printf("Enter a string: ");
    gets(str);
    for(counter=0;str[counter]!=NULL;counter++)
    {
    if(str[counter]>='0' && str[counter]<='@')
           
            countSpecialChar++;
    }
 
    printf("\nSpecial Characters: %d",countSpecialChar);
 
    return 0;
}
