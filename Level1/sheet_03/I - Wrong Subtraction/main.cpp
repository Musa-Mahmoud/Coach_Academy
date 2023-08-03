#include <iostream>

using namespace std;

int main()
{
    int n;
    unsigned short k;

    cin >> n >> k;

    while(0 != k)
    {
        if(0 == n % 10)
            n /= 10;
        else
            n--;

        k--;
    }

    cout << n;

    return 0;
}
