#include <iostream>

using namespace std;

int main()
{
    unsigned short n;

    cin >> n;

    if( n % 4 == 0 || n % 7 == 0 || n % 44 == 0 || n % 47 == 0 || n % 74 == 0 || n % 77 == 0
        || n % 444 == 0 || n % 447 == 0 || n % 474 == 0 || n % 477 == 0 || n % 744 == 0
        || n % 747 == 0 || n % 774 == 0 || n % 777 == 0 )
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }



    /*
    unsigned short n, isLucky = 1;

    cin >> n;

    if( (n % 4 == 0) || (n % 7 == 0) )
    {
        isLucky = 1;
    }
    else
    {
        while(0 != n && isLucky)
        {
            if( (n % 10 != 4) && (n % 10 != 7) )
                isLucky = 0;

            n /= 10;
        }
    }

    if(isLucky)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    */
    return 0;
}
