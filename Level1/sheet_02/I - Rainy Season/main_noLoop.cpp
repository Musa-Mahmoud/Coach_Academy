#include <iostream>

using namespace std;

int main()
{
    string         str;

    cin >> str;

    if(str == "RRR") cout << 3 << "\n";
    else if(str == "SSS") cout << 0 << "\n";
    else if(str == "RRS" || str == "SRR") cout << 2 << "\n";
    else cout << 1 << "\n";

    return 0;
}
