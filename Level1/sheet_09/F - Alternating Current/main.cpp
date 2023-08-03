#include <iostream>
#include <stack>

using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL)


int main()
{
    FIO;

    string str;
    stack<char> s;

    cin >> str;

    int ss = str.size();

    for(int i = 0; i < ss; i++)
    {
        if(s.empty() || s.top() != str[i])
            s.push(str[i]);
        else
            s.pop();
    }



    if(s.empty())
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}


/************************* ANTHER SOLUTION *************************/
//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL)
//
//
//int main()
//{
//    FIO;
//
//    string str;
//    stack<char> s;
//
//    cin >> str;
//
//    int ss = str.size();
//
//    bool untangled = true;
//    if(ss % 2 == 0)
//    {
//        s.push(str[0]);
//
//        char ch;
//        for(int i = 1; i < ss && untangled; i++)
//        {
//            if(s.empty())
//            {
//                s.push(str[i]);
//                i++;
//            }
//
//            ch = str[i];
//
//
//            if(s.top() == '+')
//            {
//                if(ch == '+')
//                {
//                    s.pop();
//                }
//                else
//                {
//                    s.push(ch);
//                }
//            }
//            else
//            {
//                if(ch == '-')
//                {
//                    s.pop();
//                }
//                else
//                {
//                    s.push(ch);
//                }
//            }
//
//        }
//    }
//    else
//    {
//        untangled = false;
//    }
//
//
//    if(untangled && s.empty())
//        cout << "Yes\n";
//    else
//        cout << "No\n";
//
//    return 0;
//}
