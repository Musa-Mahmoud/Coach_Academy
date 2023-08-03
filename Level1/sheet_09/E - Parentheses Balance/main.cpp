#include <iostream>
#include <stack>

using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL)


int main()
{
    FIO;

    int n;
    string str;

    cin >> n;
    cin.ignore();

    while(n--)
    {
        stack<char> s;

        getline(cin, str);

        bool correct = true;
        if(str.size() % 2 == 0)
        {
            for(int i = 0; i < str.size(); i++)
            {
                if(str[i] == '(' || str[i] == '[')
                {
                    s.push(str[i]);
                }
                else if(!s.empty() && s.top() == '(' && str[i] == ')' )
                {
                    s.pop();
                }
                else if(!s.empty() && s.top() == '[' && str[i] == ']' )
                {
                    s.pop();
                }
                else
                {
                    correct = false;
                    break;
                }
            }
        }
        else
        {
            correct = false;
        }


        if(correct && s.empty())
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}




/************ ANTHER SOLUTION ************/
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
//    int n;
//    string str;
//
//    cin >> n;
//    cin.ignore();
//
//    while(n--)
//    {
//        stack<char> s;
//
//        getline(cin, str);
//
//        int ss = str.size();
//
//        bool correct = true;
//        if(ss % 2 == 0)
//        {
//            char ch = '0';
//            for(int i = 0; i < ss && correct; i++)
//            {
//                ch = str[i];
//
//                if(ch == '(' || ch == '[')
//                {
//                    s.push(ch);
//                }
//                else if(ch == ')' || ch == ']')
//                {
//                    if(s.empty())
//                    {
//                        correct = false;
//                    }
//                    else
//                    {
//                        if(s.top() == '(' && ch == ')')
//                        {
//                            s.pop();
//                        }
//                        else if(s.top() == '[' && ch == ']')
//                        {
//                            s.pop();
//                        }
//                    }
//                }
//            }
//        }
//        else
//        {
//            correct = false;
//        }
//
//
//        if(correct && s.empty())
//            cout << "Yes\n";
//        else
//            cout << "No\n";
//    }
//
//    return 0;
//}
