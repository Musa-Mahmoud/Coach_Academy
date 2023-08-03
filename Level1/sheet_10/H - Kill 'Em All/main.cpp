#include <iostream>
#include <set>

using namespace std;

#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define nd   second
#define ENDL '\n'
#define ll   long long


int main()
{
    FIO

    int q, n, r;

    cin >> q;

    while(q--)
    {
        int ns = 0;

        set<int> st;

        cin >> n >> r;

        for(int i = 0; i < n; i++)
        {
            int x;

            cin >> x;

            st.insert(x);
        }


        for(auto it = st.rbegin(); it != st.rend(); it++)
        {
            if((*it - (r * ns)) > 0)
                ns++;
            else
                break;
        }

        cout << ns << ENDL;
    }

    return 0;
}
