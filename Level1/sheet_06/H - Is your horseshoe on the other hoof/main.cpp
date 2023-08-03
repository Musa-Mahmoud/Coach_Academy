#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    unsigned int arr[9] = {0};
    unsigned short i, j, cnt = 0;

    for(i = 0; i < 4; i++) cin >> arr[i];

    sort(arr, arr + 4);

    for(i = 0; i < 3; i++) if(arr[i] == arr[i + 1]) cnt++;

    cout << cnt << '\n';

    return 0;
}
