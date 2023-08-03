/*
#include <cstdio>

int main()
{
    unsigned int n, temp, numLength = 0, divValue = 1, isPal = 1;

    scanf("%i", &n);

    while(n % 10 == 0) n /= 10;

    temp = n;
    while(temp) temp /= 10 , numLength++;

    numLength--;
    while(numLength--)
    {
        divValue *= 10;
    }


    while(isPal && n > 10)
    {
        if( (n % 10) != ( n / divValue ) ) isPal = 0;

        n %= divValue;
        n /= 10;
        divValue /= 100;
    }


    if(isPal) printf("Yes\n");
    else printf("No\n");

    return 0;
}
*/
