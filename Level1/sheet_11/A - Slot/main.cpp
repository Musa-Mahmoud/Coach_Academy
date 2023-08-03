#include <iostream>

using namespace std;

#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define st   first
#define nd   second
#define ENDL '\n'
#define ll   long long


int main()
{
    char c1, c2, c3;

    cin >> c1 >> c2 >> c3;

    (c1 == c2 && c2 == c3)? cout << "Won\n" : cout << "Lost\n";

    return 0;
}


/**************************** ANTHER SOLUTION ****************************/
//#include <iostream>
//#include <set>
//
//using namespace std;
//
//#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
//#define st   first
//#define nd   second
//#define ENDL '\n'
//#define ll   long long
//
//
//int main()
//{
//    char c1, c2, c3;
//    set<char> st;
//
//    cin >> c1 >> c2 >> c3;
//
//    st.insert(c1);
//    st.insert(c2);
//    st.insert(c3);
//
//    (st.size() == 1)? cout << "Won\n" : cout << "Lost\n";
//
//    return 0;
//}
