#include <stdio.h>
void main()
{
      char str [81];
      int nletter, ndigit, nspace, notherchar);
      int i;
      clrscr();
      printf("Enter a line of text:\n");
      gets(str);
      nletter = ndigit = nspace = nother = 0;
      i = 0;
      while (str[i] != '\0')
          {
              char ch= str[i];
              if (ch>= 'A' && ch<= 'Z' || ch>= 'a' && ch<= 'z')
              nletter++;
              else if (ch>= '0' && ch<= '9')
                       ndigit++;
              else if (ch == ' ' || ch =='\n' || ch == '\t')
                       nspace++;
              else nother++;
                       i++;
          }
              printf("Letters: %d \tWhite spaces : %d", nletter, nspace);
              printf(" Digits : %d \tOther chars : %d\n", ndigit, nother);
              getch();
} 
