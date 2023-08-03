#include <iostream>

using namespace std;

int main()
{
    string str;

    cin >> str;

    unsigned int ss = str.size();

    for(unsigned short i = 0; i < ss; i++)
    {
        if(str[i] != '9' || i != 0)
        {
            if( str[i] > '4' )
            {
                str[i] = '9' - (str[i] - '0');
            }
        }
    }

    cout << str << '\n';

    return 0;
}
