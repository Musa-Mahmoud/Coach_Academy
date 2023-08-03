//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int t, k, cnt;
//    string str;
//
//    cin >> t;
//
//    while(t--)
//    {
//        cnt = 0;
//
//        cin >> k;
//        cin >> str;
//
//        for(int i = 0; i < k - 1; i++)
//        {
//            bool changed = false;
//            for(int j = i; j < k - 1; j++)
//            {
//                if(str[j] == 'A' && str[j + 1] == 'P')
//                {
//                    str[j + 1] = 'A';
//                    changed = true;
//                    j++;
//                }
//            }
//
//            if(changed) cnt++;
//        }
//
//        cout << cnt << '\n';
//    }
//
//
//    return 0;
//}
