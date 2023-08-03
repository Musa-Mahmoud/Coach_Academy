#include <iostream>

using namespace std;

int main()
{
    unsigned short p;

    for(unsigned short i = 0; i < 26; i++)
    {
        cin >> p;

        cout << (char) (96 + p);
    }

    return 0;
}
