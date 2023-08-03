#include <iostream>

using namespace std;

int main()
{
    unsigned short n;

    cin >> n;

    ( (n / 100) == (n % 10) )? cout << "Yes" : cout << "No";

    return 0;
}
