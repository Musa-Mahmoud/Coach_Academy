#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, cnt = 0;
    vector<pair<char,int>> vec(200005);

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> vec[i].first;

    for(int i = 0; i < n; i++)
        cin >> vec[i].second;

    int mn = 2000000000;
    for(int i = 0; i < n - 1; i++)
    {
        if(vec[i].first == 'R' && vec[i + 1].first == 'L')
        {
            mn = min(mn, vec[i + 1].second - vec[i].second);
        }
    }

    if(mn == 2000000000) cout << -1 << '\n';
    else cout << (mn >> 1) << '\n';



    return 0;
}
