//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    unsigned short n, k, cnt = 0;
//
//    cin >> n >> k;
//
//    while(n--)
//    {
//        string str;
//
//        cin >> str;
//
//        unsigned short sum = 0 , kSum = ( k * (k + 1) ) >> 1;
//        unsigned short ss = str.size();
//
//        for(unsigned short i = 0; i < ss; i++)
//        {
//            str[i] -= '0';
//            sum += str[i];
//        }
//
//
//        if(kSum == sum && ss != 1)
//            cnt++;
//    }
//
//    cout << cnt << '\n';
//
//    return 0;
//}
//
