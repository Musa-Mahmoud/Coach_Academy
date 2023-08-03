#include <iostream>

using namespace std;

int main()
{
    unsigned int n, i, cnt = 0, curr;
    short prev = -1;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> curr;

        if(curr != prev)
        {
            prev = curr;
            cnt++;
        }
    }


    cout << cnt;

    return 0;
}
