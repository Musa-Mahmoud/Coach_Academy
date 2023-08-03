#include <iostream>
#include <queue>

using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL)


int main()
{
    FIO;

    int n, m;
    queue<pair<int,int>> q;

    cin >> n >> m;

    for(int i = 1; i <= n; i++)
    {
        int temp;

        cin >> temp;

        q.push({temp, i});
    }

    while(q.size() > 1)
    {

        if(m < q.front().first)
            q.push({q.front().first - m, q.front().second});

        q.pop();

    }

    cout << q.front().second << '\n';

    return 0;
}




//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL)
//
//
//int main()
//{
//    FIO;
//
//    int n, m;
//    queue<pair<int,int>> q;
//
//    cin >> n >> m;
//
//    for(int i = 1; i <= n; i++)
//    {
//        int temp;
//
//        cin >> temp;
//
//        q.push({temp, i});
//    }
//
//    while(q.size() > 1)
//    {
//
//        if(m >= q.front().first)
//        {
//            q.pop();
//        }
//        else
//        {
//            q.push({q.front().first - m, q.front().second});
//            q.pop();
//        }
//    }
//
//    cout << q.front().second << '\n';
//
//    return 0;
//}
