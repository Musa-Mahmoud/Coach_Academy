#include <iostream>

using namespace std;

int main()
{
    unsigned int k, x;

    cin >> k >> x;

    if(500 * k < x)
        cout << "No";
    else
        cout << "Yes";

    return 0;
}
