//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    vector<int> v1, v2, v3;
//
//    cin >> n;
//
//    for(int i = 1; i <= n; i++)
//    {
//        int temp;
//
//        cin >> temp;
//
//        if(temp == 1)
//        {
//            v1.push_back(i);
//        }
//        else if(temp == 2)
//        {
//            v2.push_back(i);
//        }
//        else
//        {
//            v3.push_back(i);
//        }
//    }
//
//    int nTeams = min(v1.size(), min(v2.size(), v3.size()));
//
//    cout << nTeams << '\n';
//
//    for(int i = 0; i < nTeams; i++)
//    {
//        cout << v1[i] << ' ' << v2[i] << ' ' << v3[i] << '\n';
//    }
//
//
//    return 0;
//}
