#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    unsigned short n, x, arr[9] = {}, prev[9] = {}, i, j, a, b;

    cin >> n >> x;


    bool dif = 1;
    for(i = 0; i < n && dif; i++)
    {
        cin >> a >> b;

        arr[0] = a;
        arr[1] = b;
        arr[2] = 7 - a;
        arr[3] = 7 - b;

        if(i == 0)
        {
            prev[0] = a;
            prev[1] = b;
            prev[2] = 7 - a;
            prev[3] = 7 - b;
        }

        sort(arr, arr + 4);
        sort(prev, prev + 4);

        for(j = 0; j < 4 && dif; j++)
        {
            if(arr[j] != prev[j])
            {
                dif = 0;
            }
        }

    }

    if(dif) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
