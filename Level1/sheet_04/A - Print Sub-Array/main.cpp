#include <iostream>

using namespace std;

int a[1000005];

int main()
{
    unsigned int n, l, r, i;

    cin >> n;

    for(i = 1; i <= n; i++)
        cin >> a[i];


    cin >> l >>r;

    for(i = l; i <= r; i++)
        cout << a[i] << ' ';

    return 0;
}
