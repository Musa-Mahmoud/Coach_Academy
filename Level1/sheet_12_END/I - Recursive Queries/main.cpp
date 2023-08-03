#include <iostream>

using namespace std;

#define FIO  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define st   first
#define nd   second
#define ENDL '\n'
#define SPC  ' '
#define ll   long long

int arr[10][1000003];

int f(int n)
{
    if(n <= 0)
        return 1;

    if(n % 10 == 0) n += 1;

    return ( (n %10) * f(n / 10) );
}

int g(int n)
{
    if(n < 10) return n;

    return g(f(n));
}


int main()
{
    FIO

    for(int i = 1; i <= 1000000; i++)
    {
        int tmp = g(i);

        for(int j = 1; j <= 9; j++)
            arr[j][i] = arr[j][i - 1];

        arr[tmp][i]++;
    }

    int q, l, r, k;

    cin >> q;

    while(q--)
    {
        cin >> l >> r >> k;

        cout << arr[k][r] - arr[k][l - 1] << ENDL;
    }

    return 0;
}
