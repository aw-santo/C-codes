#include <stdio.h>

int main()
{
    long long int number, counter = 0, m = 1000000007;
    scanf("%lld", &number);
    long long int fact = 1;
    for (long long int i = number; i > 0; i--)
    {
        fact = (fact * i) % m;
    }
    
    int rem;
    while (fact > 0)
    {
        rem = fact % 10;
        if (rem == 0)
            counter++;
        fact /= 10;
    }
    printf("Number of zeros in factorial of %lld is %lld", number, counter);
    return 0;
}