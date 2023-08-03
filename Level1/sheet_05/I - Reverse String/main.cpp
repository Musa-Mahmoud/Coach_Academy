//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int t;
//
//    cin >> t;
//
//    while(t--)
//    {
//
//        string s,a;
//
//        cin >> s >> a;
//
//        char c = a[0];
//
//        bool done = 1;
//
//        for(int i = 0; i < s.size() && done;i++)
//        {
//            if(s[i] != c)
//                continue;
//
//            for(int j = i; j < s.size() && done;j++)
//            {
//                int k = 0,ind = i;
//
//                while(k < a.size() && ind < j && a[k] == s[ind])
//                {
//                    k++;
//                    ind++;
//                }
//                while(k < a.size() && ind >= 0 && a[k] == s[ind])
//                {
//                    k++;
//                    ind--;
//                }
//               if(k == a.size())
//               {
//                    cout << "YES\n";
//                    done = 0;
//               }
//            }
//        }
//        if(done) cout << "NO\n";
//    }
//
//    return 0;
//}
