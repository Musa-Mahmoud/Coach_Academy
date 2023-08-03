#include <iostream>

using namespace std;

int main()
{
    unsigned short a, b, i, year = 0;

    cin >> a >> b;

    while(a <= b)
    {
        a *= 3;
        b *= 2;
        year++;
    }

    cout << year;

    return 0;
}
