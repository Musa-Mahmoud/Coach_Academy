#include <iostream>

using namespace std;

#define FIO  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define st   first
#define nd   second
#define ENDL '\n'
#define SPC  ' '
#define ll   long long

int n, arr[100];

int getSum(int idx)
{
    if(idx >= n)
        return 0;

    return (arr[idx] + getSum(idx + 1));
}


int main()
{
    FIO

    int t;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> n;

        for(int j = 0; j < n; j++)
            cin >> arr[j];

        cout << "Case " << i+1 << ": " << getSum(0) << ENDL;


    }

    return 0;
}
