#include <iostream>

using namespace std;

int main()
{
    unsigned short v, t, s, d;

    cin >> v >> t >> s >> d;

    if(v * t > d || v * s < d )
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}
