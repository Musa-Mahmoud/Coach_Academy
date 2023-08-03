//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//unsigned int d[100005];
//
//int main()
//{
//    unsigned int i, n, m, c, uc;
//    unsigned long long uSum = 0, cSum = 0;
//
//    cin >> n >> m;
//
//    for(i = 0; i < n; i++)
//    {
//        cin >> uc >> c;
//
//        d[i] = uc - c;
//
//        uSum += uc;
//        cSum += c;
//    }
//
//    sort(d, d + n, greater<int>());
//
//    if(uSum <= m)
//    {
//        cout << 0 << '\n';
//    }
//    else if(cSum > m)
//    {
//        cout << -1 << '\n';
//    }
//    else
//    {
//        unsigned int idx = 0;
//        while(uSum > m && n)
//        {
//            uSum -= d[idx];
//            idx++;
//        }
//
//        cout << idx << '\n';
//    }
//
//    return 0;
//}
