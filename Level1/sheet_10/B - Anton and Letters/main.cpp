#include <iostream>
#include <set>

using namespace std;


#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL);

int main()
{
    FIO

    string str;
    set<char> st;

    getline(cin, str);

    int ss = str.size();

    for(int i = 1; i < ss - 1; i+=3)
    {
        st.insert(str[i]);
    }

    printf("%d\n", st.size());

    return 0;
}


/********************************* ANTHER SOLUTION *********************************/
//#include <stdio.h>
//#include <set>
//
//using namespace std;
//
//
//#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL);
//
//int main()
//{
//    char ch = '0';
//    set<char> st;
//
//    while(ch != '\n')
//    {
//        scanf("%c", &ch);
//
//        if(ch >= 'a' && ch <= 'z')
//            st.insert(ch);
//    }
//
//    printf("%d\n", st.size());
//
//
//    return 0;
//}
