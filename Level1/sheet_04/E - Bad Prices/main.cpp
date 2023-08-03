/*
#include <cstdio>

using namespace std;

int a[150005];

int main()
{
    unsigned short t;
    int n, bd;

    scanf("%i", &t);

    while(t--)
    {
        bd = 0;

        scanf("%i", &n);;

        for(int i = 0; i < n; i++)
            scanf("%i", &a[i]);

        if(1 != n)
        {
            for(int i = 0; i < n; i++)
            {
                for(int j = i; j < n - 1; j++)
                {
                    if(a[i] > a[j + 1])
                    {
                        bd++;
                        break;
                    }
                }
            }
        }

        printf("%i\n", bd);

    }


    return 0;
}*/



/*
#include <iostream>

using namespace std;

int a[150005];

int main()
{
    int t, n, bd, itr = 0;

    cin >> t;

    while(t--)
    {
        bd = 0;

        cin >> n;

        for(int i = 0; i < n; i++)
            cin >> a[i];

        if(1 != n)
        {
            for(int i = 0; i < n; i++)
            {
                if(i == n - 1)
                {
                    i = 0;
                }

                if(a[itr] > a[itr + 1])
                {
                    bd++;
                    break;
                }

                itr = (itr + 1 )% n;
            }
        }

        cout << bd << '\n';
    }


    return 0;
}
*/
