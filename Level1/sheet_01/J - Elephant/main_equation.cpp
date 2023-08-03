#include <iostream>

using namespace std;

int main()
{
    unsigned int x;

    cin >> x;

    // To ceil:  n / m ----> (n + m -1) / m
    // To floor: n / m ----> (int)(n / m)

    cout << (x + 4) / 5 << "\n";

    return 0;
}
