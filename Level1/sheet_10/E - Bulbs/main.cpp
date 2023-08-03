#include <iostream>
#include <set>

using namespace std;


#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL);

int main()
{
    FIO

    int n, m;
    set<char> st;

    cin >> n >> m;

    while(n--)
    {
        int x;

        cin >> x;

        while(x--)
        {
            int temp;

            cin >> temp;

            st.insert(temp);
        }
    }

    if( st.size() == m)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';


    return 0;
}
