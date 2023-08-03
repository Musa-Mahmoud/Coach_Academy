#include <iostream>

using namespace std;

#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define st   first
#define nd   second
#define ENDL '\n'
#define SPC  ' '
#define ll   long long


int main()
{
    char npt = '2';
    char arr[100000];

    int idx = 0;
    bool first_zero = true;
    while(npt != '\n' && npt != ' ')
    {
        scanf("%c", &npt);

        if(npt == '0' && first_zero)
        {
           first_zero = false;
        }
        else
        {
            arr[idx++] = npt;
        }
    }

    if(first_zero)
        for(int i = 1; i < idx; i++)
            cout << arr[i];
    else
        for(int i = 0 ; i < idx; i++)
            cout << arr[i];

    cout << ENDL;

    return 0;
}


/***************************** ANTHER SOLUTION *****************************/
//#include <iostream>
//
//using namespace std;
//
//#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
//#define st   first
//#define nd   second
//#define ENDL '\n'
//#define SPC  ' '
//#define ll   long long
//
//
//
//int main()
//{
//    string str;
//
//    cin >> str;
//
//    bool   allOne = true;
//    int ss = str.size();
//    for(int i = 0 ; i < ss; i++)
//    {
//        if(str[i] == '0')
//        {
//            str.erase(str.begin() + i);
//            allOne = false;
//            break;
//        }
//    }
//
//    if(allOne)
//        str.pop_back();
//
//    ss = str.size();
//    for(int i = 0 ; i < ss; i++)
//        cout << str[i];
//
//    cout << ENDL;
//
//    return 0;
//}
