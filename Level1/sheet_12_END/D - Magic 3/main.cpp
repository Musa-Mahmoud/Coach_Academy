#include <iostream>
#include <vector>

using namespace std;

#define FIO  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define st   first
#define nd   second
#define ENDL '\n'
#define SPC  ' '
#define ll   long long

int n, s, d;
vector<int> x, y;

bool canDamage(int i)
{
    if(i >= n)
        return false;

    return ( (x[i] < s && y[i] > d) || (canDamage(i + 1)) );
}


int main()
{
    FIO

    cin >> n >> s >> d ;

    for(int i = 0; i < n; i++){ int tmp1, tmp2; cin >> tmp1 >> tmp2; x.push_back(tmp1); y.push_back(tmp2); }

    if(canDamage(0)) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
