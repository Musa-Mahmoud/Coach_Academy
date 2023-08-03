#include <iostream>
#include <queue>
#include <vector>

using namespace std;

#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL);
#define first st
#define second nd


int main()
{
    FIO

    int n;
    string str;
    vector<string> vec;
    priority_queue<int, vector<int>, greater<int>> pq;


    cin >> n;

    while(n--)
    {
        cin >> str;

        if(str == "insert")
        {
            int x;

            cin >> x;

            pq.push(x);

            vec.push_back(str + " " + to_string(x));
        }
        else if(str == "removeMin")
        {
            if(pq.empty())
                vec.push_back("insert 1");
            else
                pq.pop();

            vec.push_back(str);
        }
        else
        {
            int x;

            cin >> x;

            while(!pq.empty() && pq.top() < x)
            {
                pq.pop();

                vec.push_back("removeMin");
            }

            if(pq.empty() || x < pq.top())
            {
                pq.push(x);

                vec.push_back("insert " + to_string(x));
            }

            vec.push_back(str + " " + to_string(x));
        }
    }

    cout << vec.size() << '\n';

    for(auto var : vec)
    {
        cout << var << '\n';
    }

    return 0;
}
