#include <iostream>

using namespace std;

unsigned int arr[100005];

int main()
{
    int n, i;
    long long x, sum = 0, cnt = 0;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> arr[i];

        sum += arr[i];
    }

    cin >> x;

    cnt = x / sum;
    sum *= cnt;
    cnt *= n;

    i = 0;
    while(x >= sum)
    {
        cnt++;
        sum += arr[i];
        i++;
    }

    cout << cnt << '\n';

    return 0;
}
