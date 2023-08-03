#include <iostream>

using namespace std;

int main()
{
    unsigned short n, h[55], i, sum = 0, avg, ans = 0, sn = 0;

    while(cin >> n, n != 0)
    {
        sn++;

        ans = 0;
        sum = 0;

        for(i = 0; i < n; i++)
        {
            cin >> h[i];
            sum += h[i];
        }

        avg = sum / n;

        for(i = 0; i < n; i++)
        {
            if (h[i] > avg)
            {
                ans += h[i] - avg;
            }
        }

        cout << "Set #" << sn << '\n';
        cout << "The minimum number of moves is " << ans <<".\n\n";
    }

    return 0;
}
