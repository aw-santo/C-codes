#include <stdio.h>
// #include<string.h>
// #inlude<stdlib.h>
int IsPalindrome(int num)
{
    int rev = 0;
    int ori = num;      //Program for reversal of no. also!!!
    while (num != 0)
    {
        rev = (rev * 10) + (num % 10);
        num = num / 10;
    }
    printf("The reversed no is : %d", rev);
    if (ori == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    printf("Enter the no. :\t");
    scanf("%d", &num);
    if (IsPalindrome(num))
    {
        printf("\nGiven no. is a palindrome");
    }
    else
    {
        printf("\nGiven no. is not a palindrome");
    }

    return 0;
}