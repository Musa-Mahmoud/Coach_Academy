#include <iostream>
#include <vector>

using namespace std;

#define FIO  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define st   first
#define nd   second
#define ENDL '\n'
#define SPC  ' '
#define ll   long long

int n;
vector<int> a, b;

int inrProd(int idx)
{
    if(idx >= n)
        return 0;

    return (a[idx] * b[idx] + inrProd(idx + 1));
}


int main()
{
    FIO

    cin >> n;

    for(int i = 0; i < n; i++){ int x; cin >> x; a.push_back(x); }

    for(int i = 0; i < n; i++){ int x; cin >> x; b.push_back(x); }

    if(inrProd(0) == 0) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
