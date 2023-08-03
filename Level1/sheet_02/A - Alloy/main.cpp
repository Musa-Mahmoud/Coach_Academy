#include <iostream>

using namespace std;

int main()
{
    unsigned short a, b;

    cin >> a >> b;

    if(0 == b && a > 0)
    {
        cout << "Gold";
    }
    else if(0 == a && b > 0)
    {
        cout << "Silver";
    }
    else
    {
        cout << "Alloy";
    }

    return 0;
}
