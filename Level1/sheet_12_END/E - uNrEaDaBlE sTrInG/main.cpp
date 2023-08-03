#include <iostream>

using namespace std;

#define FIO  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define st   first
#define nd   second
#define ENDL '\n'
#define SPC  ' '
#define ll   long long

int ss;
string str;

bool hardToRead(int i)
{
    if(ss == 1) return (str[i] >= 'a');

    if(i >= ss)
        return true;


    return ( (str[i] >= 'a' && str[i + 1] <= 'Z') && (hardToRead(i + 2)) );
}


int main()
{
    FIO

    cin >> str;

    ss = str.size();

    if(hardToRead(0)) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
