#include <iostream>

using namespace std;

int main()
{
    unsigned short t;

    cin >> t;

    while( t--)
    {
        string str, strOut;

        cin >> str;

        unsigned short ss = str.size();

        if (ss < 3)
        {
            cout << str << '\n';
        }
        else
        {
            strOut.push_back(str[0]);

            for(unsigned short i = 1; i < ss - 1; i+=2)
            {
                strOut.push_back(str[i]);
            }


            strOut.push_back(str[ss - 1]);

            cout << strOut << '\n';
        }

    }

    return 0;
}
