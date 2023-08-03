#include <iostream>

using namespace std;

#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define st   first
#define nd   second
#define ENDL '\n'
#define ll   long long


int main()
{
    int n, B = 0, C = 0;

    cin >> n;

    while(n--)
    {
        int npt;

        cin >> npt;

        if(npt > 0)
            B += npt;
        else
            C += npt;
    }

    cout << B - C << ENDL;


    return 0;
}
