#include <iostream>

using namespace std;

int main()
{
    unsigned int n;

    cin >> n;

    cout << (n / 100) + (n / 20)%5 + (n / 10)%2 + (n / 5)%2 + (n % 5) << "\n";

    return 0;
}
