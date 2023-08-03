#include <iostream>

using namespace std;

#define FIO  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define st   first
#define nd   second
#define ENDL '\n'
#define SPC  ' '
#define ll   long long

int n;

int day(int d, int m)
{
    if(m > n)
        return d;

    return (day(d + 1, m + d));
}


int main()
{
    cin >> n;

    cout << day(1, 1) - 1 << ENDL;

    return 0;
}
