#include <iostream>

using namespace std;

int main()
{
    short a, b, c;

    cin >> a >> b >> c;

    if( (a - b + c ) > 0 )
    {
        cout << "Takahashi";
    }
    else
    {
        cout << "Aoki";
    }

    return 0;
}
