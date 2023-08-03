#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int n, m, i;
    deque<int> dQ, index; // we can use a pair of deque like : deque<pair<int, int>> dq;

    cin >> n >> m;

    for(i = 0; i < n; i++)
    {
        int temp;

        cin >> temp;

        dQ.push_back(temp);
        index.push_back(i);
    }

    while(dQ.size() > 1)
    {
        if(dQ.front() <= m)
        {
            dQ.pop_front();
            index.pop_front();
        }
        else
        {
            int tempV, tempI;

            tempV = dQ.front();
            tempI = index.front();

            dQ.pop_front();
            index.pop_front();

            dQ.push_back(tempV - m);
            index.push_back(tempI);
        }
    }

    cout << index.front() + 1 << '\n';


    return 0;
}
