#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s, t;

    cin >> s >> t;

    reverse(t.begin(), t.end());

    (s == t)? cout << "YES\n" : cout << "NO\n";

    return 0;
}
