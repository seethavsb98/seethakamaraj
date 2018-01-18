#include<stdio.h>
void main()                 
{
while (secondOddNum - firstOddNum > 2)
    {
        if (firstOddNum % 2 > 0) //positive numbers
        {
            firstOddNum += 2;
            sumOdd += pow(firstOddNum,2);
            cout << firstOddNum << endl;

        } else 
        {
            firstOddNum += 1;
            sumOdd += pow(firstOddNum,2);
            cout << firstOddNum << endl;
        }
