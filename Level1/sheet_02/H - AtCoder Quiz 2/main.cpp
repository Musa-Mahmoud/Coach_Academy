#include <iostream>

using namespace std;

int main()
{
    unsigned short x;

    cin >> x;

    if (x < 40)
    {
        cout << (40 - x);
    }
    else if(x < 70)
    {
        cout << (70 - x);
    }
    else if(x < 90)
    {
        cout << (90 - x);
    }
    else
    {
        cout << "expert";
    }

    return 0;
}
