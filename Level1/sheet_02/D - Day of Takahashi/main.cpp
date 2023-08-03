#include <iostream>

using namespace std;

int main()
{
    unsigned short a, b;

    cin >> a >> b;

    if(b >= a)
    {
        cout << a;
    }
    else
    {
        cout << --a;
    }

    return 0;
}
