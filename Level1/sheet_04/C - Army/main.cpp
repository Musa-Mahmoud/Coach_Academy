#include <iostream>

using namespace std;

int main()
{
    int d[105] = {};
    unsigned short n, a, b, i, years = 0;

    cin >> n;

    for(i = 1; i < n ; i++)
    {
        cin >> d[i];
    }

    cin >> a >> b;

    for(i = a; i < b ; i++)
    {
        years += d[i];
    }

    cout << years;

    return 0;
}
