#include <iostream>
#include <set>

using namespace std;


#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL);

int main()
{
    FIO

    string str;
    set<char> st;

    cin >> str;

    int ss = str.size();

    for(int i = 0; i < ss; i++)
    {
        st.insert(str[i]);
    }

    if(st.size() & 1)
        printf("IGNORE HIM!\n");
    else
        printf("CHAT WITH HER!\n");


    return 0;
}


/*************************** ANTER SOLUTION ***************************/
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
//    while(ch != '\n') // && ch != ' '
//    {
//        scanf("%c", &ch);
//
//        st.insert(ch);
//    }
//
//    if(st.size() & 1)
//        printf("CHAT WITH HER!\n");
//    else
//        printf("IGNORE HIM!\n");
//
//
//    return 0;
//}
