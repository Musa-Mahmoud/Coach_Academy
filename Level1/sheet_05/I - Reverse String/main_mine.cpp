#include <iostream>

using namespace std;

typedef unsigned short u16;

int main()
{
    u16 q;

    cin >> q;

    while(q--)
    {
        string s, t, res = "";

        cin >> s;
        cin >> t;

        u16 ss = s.size(), ts = t.size();

        u16 strtIdx = s.find(t[0]);

        bool isDone = 1;

        for(u16 i = strtIdx; i < ss && isDone; i++)
        {
            u16 j = 0, idx = strtIdx;

            while(j < ts && idx < i && s[idx] == t[j])
            {
                j++;
                idx++;
            }

            while(j < ts && idx >= 0 && s[idx] == t[j])
            {
                j++;
                idx--;
            }

            if(j = ts)
            {
                cout << "YES\n";
                isDone = 0;
            }
        }

        if(isDone)
            cout << "NO\n";
    }

    return 0;
}
