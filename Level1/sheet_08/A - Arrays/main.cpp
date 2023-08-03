#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    deque<int> input, q1, q2, q3;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int temp;

        cin >> temp;

        input.push_back(temp);
    }

    sort(input.begin(), input.end());

    q1.push_back(input.front());
    input.pop_front();

    if(input.back() == 0)
    {
        q2.push_back(input.front());
        input.pop_front();
        q2.push_back(input.front());
        input.pop_front();
    }
    else
    {
        q2.push_back(input.back());
        input.pop_back();
    }


    for(int var : input)
    {
        q3.push_back(var);
    }

    cout << q1.size() << ' ' << q1.back();
    cout << '\n';

    cout << q2.size() << ' ';
    for(int var : q2)
    {
        cout << var << ' ';
    }
    cout << '\n';

    cout << q3.size() << ' ';
    for(int var : q3)
    {
        cout << var << ' ';
    }
    cout << '\n';

    return 0;
}
