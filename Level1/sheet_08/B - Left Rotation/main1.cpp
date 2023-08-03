#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int n, d;
    deque<int> dQ;

    cin >> n >> d;


    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        dQ.push_back(temp);
    }


    if(n == d)
    {
        for(int var : dQ)
            cout << var << ' ';
        cout << '\n';
    }
    else
    {
        for(int i = 0; i < d; i++)
        {
            dQ.push_back(dQ.front());
            dQ.pop_front();

        }

        for(int var : dQ)
            cout << var << ' ';

        cout << '\n';
    }

    return 0;
}
