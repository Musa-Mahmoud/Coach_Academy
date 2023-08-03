#include <iostream>
#include <vector>

using namespace std;

#define FIO  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define st   first
#define nd   second
#define ENDL '\n'
#define SPC  ' '
#define ll   long long

int  mn = (int)2e9, vs;
vector<int> vec;

int getMinMoney(int i)
{
    if(i >= vs)
        return mn;

    return (min(vec[i], getMinMoney(i + 1)) );
}


int main()
{
    FIO

    int n;

    cin >> n;

    while(n--)
    {
        int a, p, x;

        cin >> a >> p >> x;

        if(x > a) vec.push_back(p);
    }

    vs = vec.size();

    if(mn == getMinMoney(0)) cout << -1 << ENDL;
    else cout << getMinMoney(0) << ENDL;

    return 0;
}
