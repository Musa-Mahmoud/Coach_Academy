#include <iostream>

using namespace std;

int main()
{
    short i, j, n, r_n, c_n;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            cin >> n;

            if(1 == n)
            {
                r_n = i;
                c_n = j;
            }
        }
    }

    r_n -= 3;
    c_n -= 3;

    if(r_n < 0) r_n *= -1;
    if(c_n < 0) c_n *= -1;

    cout << r_n + c_n << '\n';

    return 0;
}
