#include <iostream>
#include <vector>
#include <map>

using namespace std;

#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL);


int main()
{
    FIO

    int n;
    string str;
    vector<string> vec;
    map<string, int> mp;

    cin >> n;

    while(n--)
    {
        cin >> str;

        vec.push_back(str);
    }


    int vs = vec.size();

    for(int i = vs - 1; i >= 0; i--)
    {

        if(mp[vec[i]] == 0)
        {
            mp[vec[i]]++;

            cout << vec[i] << '\n';
        }
    }


    return 0;
}
