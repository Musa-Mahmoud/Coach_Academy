#include <iostream>
#include <map>

using namespace std;

#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL);
#define ENDL '\n'


int main()
{
    FIO

    int t, n, m;

    cin >> t;

    while(t--)
    {
        map<int, int> mp;

        cin >> n >> m;

        for(int i = 0; i < n; i++)
        {
            int temp;

            cin >> temp;

            mp[temp]++;
        }

        int canceled_trains = 0;
        for(int i = 0; i < m; i++)
        {
            int temp;

            cin >> temp;

            canceled_trains += mp[temp];
        }

        cout << canceled_trains << ENDL;

    }

    return 0;
}



/******************************* ANTHER SOLUTION *******************************/
//#include <iostream>
//#include <set>
//
//using namespace std;
//
//#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL);
//#define ENDL '\n'
//
//
//int main()
//{
//    FIO
//
//    int t, n, m;
//
//    cin >> t;
//
//    while(t--)
//    {
//        set<int> st;
//
//        cin >> n >> m;
//
//        for(int i = 0; i < n; i++)
//        {
//            int temp;
//
//            cin >> temp;
//
//            st.insert(temp);
//        }
//
//        for(int i = 0; i < m; i++)
//        {
//            int temp;
//
//            cin >> temp;
//
//            st.insert(temp);
//        }
//
//        cout << (n + m - st.size()) << ENDL;
//    }
//
//    return 0;
//}
