#include <iostream>
#include <algorithm>

using namespace std;

unsigned int a[1000005];

int main()
{
    unsigned short i, n;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    bool haveOne = binary_search(a, a + n, 1);

    (haveOne)? cout << -1 << '\n' : cout << 1 << '\n';

    return 0;
}
