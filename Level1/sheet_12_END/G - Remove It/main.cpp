#include <iostream>

using namespace std;

#define FIO  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define st   first
#define nd   second
#define ENDL '\n'
#define SPC  ' '
#define ll   long long

int n, x, arr[(int)1e5];

void printNoX(int idx)
{
    if(idx >= n)
        return ;

    if(arr[idx] != x) cout << arr[idx] << SPC;

    printNoX(idx + 1);
}


int main()
{
    cin >> n >> x;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    printNoX(0);

    cout << ENDL;

    return 0;
}
