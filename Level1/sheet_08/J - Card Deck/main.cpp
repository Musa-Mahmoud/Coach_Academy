#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, n;

    cin >> t;

    while(t--)
    {
        cin >> n;

        vector<int> vIn(100005), vMax(100005);


        int mx = 0;
        for(int i = 1; i <= n; i++)
        {
            cin >> vIn[i];

            mx = max (mx, vIn[i]);

            vMax[i] = mx;
        }


        int k = n;
        for(int i = n; i >= 1; i--)
        {
            if(vIn[i] == vMax[i])
            {
                for(int j = i; j <= k; j++)
                    cout << vIn[j] << ' ';

                k = i - 1;
            }
        }
        cout << '\n';

    }

    return 0;
}
