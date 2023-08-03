#include <iostream>

using namespace std;

int main()
{
    short a[55] = {}, n, k ,pr = 0, i;

    cin >> n >> k;

    for(i = 0 ; i < n; i++)
        cin >> a[i];

    i = 0;
    while(a[k - 1] <= a[i] && a[i] > 0)
    {
        pr++;
        i++;
    }

    cout << pr << '\n';

    return 0;
}
