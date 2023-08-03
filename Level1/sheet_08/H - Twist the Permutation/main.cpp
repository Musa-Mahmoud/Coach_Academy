#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n;

        cin >> n;

        vector<int> vec(2005), vOut(2005);

        for(int i = 1; i <= n; i++)
        {
            int temp;

            cin >> temp;

            vec[temp] = i;
        }

        for(int i = n; i >= 1; i--)
        {
            vOut[i] = vec[i] % i;

            for(int j = 1; j <= i; j++)
            {
                vec[j] = (vec[j] + (i - vOut[i])) % i;
            }
        }

        for(int i = 1; i <= n; i++)
        {
            cout << vOut[i] << ' ';
        }

        cout << '\n';
    }

    return 0;
}
