#include <iostream>

using namespace std;

int main()
{
    int t, k, cnt;
    string str;

    cin >> t;

    while(t--)
    {
        cnt = 0;

        cin >> k;
        cin >> str;

        int mx = 0;
        bool start_count = false;
        for(int i = 0; i < k; i++)
        {
            if(str[i] == 'A')
            {
                cnt = 0;
                start_count = true;
            }
            if(str[i] == 'P' && start_count)
            {
                cnt++;
                mx = max(mx, cnt);
            }
        }

        cout << mx << '\n';
    }


    return 0;
}
