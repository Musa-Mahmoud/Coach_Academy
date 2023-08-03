#include <iostream>

using namespace std;

int main()
{
    unsigned short n, i, p, v, t, cnt = 0;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> p >> v >> t;

        if(p + v + t >= 2)
            cnt++;
    }

    cout << cnt;


    return 0;
}
