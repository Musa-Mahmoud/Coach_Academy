#include <iostream>

using namespace std;

int main()
{
    unsigned short t, n, k, a[35] = {}, b[35]= {}, i, j, sum = 0;;

    cin >> t;

    while(t--)
    {
        cin >> n >> k;

        for(i = 0; i < n; i++)
            cin >> a[i];

        for(i = 0; i < n; i++)
            cin >> b[i];


        while(k--)
        {
            short aIdx = -1, bIdx = -1;
            unsigned short a_min = 31, b_max = 0;

            for(j = 0; j < n ; j++)
            {
                if(a[j] < a_min)
                {
                    a_min = a[j];
                    aIdx = j;
                }

                if(b[j] > b_max)
                {
                    b_max = b[j];
                    bIdx = j;
                }
            }

            if(b_max > a_min)
            {
                unsigned short temp = a[aIdx];
                a[aIdx] = b[bIdx];
                b[bIdx] = temp;
            }
        }

        sum = 0;
        for(i = 0; i < n; i++)
            sum += a[i];

        cout << sum << '\n';

    }


    return 0;
}
