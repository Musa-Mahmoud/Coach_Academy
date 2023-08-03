#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, prev = 0, last;
    vector<int> vec(1001), steps;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int temp;

        cin >> temp;

        if(temp <= prev)
        {
            steps.push_back(prev);
        }

        prev = temp;

        vec[temp]++;

        last = temp;
    }

    cout << vec[1] << '\n';

    for(int var : steps)
    {
        cout << var << ' ';
    }

    cout << last << '\n';


    return 0;
}
