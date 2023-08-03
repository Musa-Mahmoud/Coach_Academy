#include <iostream>

using namespace std;

#define FIO  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define st   first
#define nd   second
#define ENDL '\n'
#define SPC  ' '
#define ll   long long

string str;

void printDic(int i)
{
    if(str[i] == '.')
        return;

    cout << str[i];

    printDic(i + 1);
}


int main()
{
    FIO

    cin >> str;

    str.push_back('.'); // or chacking in printDic if(str[i] == '.' || i == str.size())

    printDic(0);

    cout << ENDL;

    return 0;
}
