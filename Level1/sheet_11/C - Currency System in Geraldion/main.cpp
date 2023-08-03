#include <iostream>
#include <queue>

using namespace std;

#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define st   first
#define nd   second
#define ENDL '\n'
#define ll   long long


int main()
{
    int n;

    cin >> n;

    bool contain_one = false;
    while(n--)
    {
        int npt;

        cin >> npt;

        if(npt == 1)
            contain_one = true;
    }

    (contain_one)? cout << "-1" << ENDL : cout << "1" << ENDL;

    return 0;
}
