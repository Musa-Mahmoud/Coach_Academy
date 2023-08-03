#include <iostream>

using namespace std;

#define FIO  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define st   first
#define nd   second
#define ENDL '\n'
#define SPC  ' '
#define ll   long long


int fct(int n)
{
    if(n <= 1)
        return 1;

    return n * fct(n - 1);
}



int main()
{
    FIO

    int a, b;

    cin >> a >> b;

    cout << fct(min(a, b)) << ENDL;

    return 0;
}
