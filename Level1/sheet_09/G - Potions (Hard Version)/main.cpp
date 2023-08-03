#include <iostream>
#include <queue>


using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL)


int main()
{
    FIO;

    int n, p, cntr = 0;
    long long  h = 0;
    priority_queue<int, vector<int>, greater<int>> pq;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> p;

        h += p;

        cntr++;

        pq.push(p);

        if(h < 0)
        {
            h -= pq.top();

            cntr--;

            pq.pop();
        }


    }


    cout << cntr << '\n';

    return 0;
}



/************************* ANTER SOLUTION *************************/
//#include <iostream>
//#include <queue>
//
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
//    int n, p, cntr = 0;
//    long long  h = 0;
//    priority_queue<int, vector<int>, greater<int>> pq;
//
//    cin >> n;
//
//    for(int i = 0; i < n; i++)
//    {
//        cin >> p;
//
//        if(p >= 0)
//        {
//            h += p;
//            cntr++;
//        }
//        else
//        {
//            if(h + p >= 0)
//            {
//                h += p;
//                cntr++;
//                pq.push(p);
//            }
//            else
//            {
//                if(!pq.empty())
//                {
//                    if(p > pq.top())
//                    {
//                        h -= pq.top();
//                        pq.pop();
//
//                        h += p;
//                        pq.push(p);
//                    }
//                }
//            }
//        }
//
//    }
//
//
//    cout << cntr << '\n';
//
//    return 0;
//}
