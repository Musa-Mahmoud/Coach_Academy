//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    int n, d;
//    vector<int> vIn(100005), vOut(100005);
//
//    cin >> n >> d;
//
//
//    for(int i = 0; i < n; i++)
//        cin >> vIn[i];
//
//    if(n == d)
//    {
//        for(int i = 0; i < n; i++)
//            cout << vIn[i] << ' ';
//        cout << '\n';
//    }
//    else
//    {
//        for(int i = 0; i < n; i++)
//        {
//            if((i - d) < 0)
//                vOut[n + (i - d)] = vIn[i];
//            else
//                vOut[i - d] = vIn[i];
//        }
//
//        for(int i = 0; i < n; i++)
//        {
//            cout << vOut[i] << ' ';
//        }
//
//        cout << '\n';
//    }
//
//    return 0;
//}

//#include <bits/stdc++.h>
//
//using namespace std;
//
//string ltrim(const string &);
//string rtrim(const string &);
//vector<string> split(const string &);
//
///*
// * Complete the 'rotateLeft' function below.
// *
// * The function is expected to return an INTEGER_ARRAY.
// * The function accepts following parameters:
// *  1. INTEGER d
// *  2. INTEGER_ARRAY arr
// */
//
//vector<int> rotateLeft(int d, vector<int> arr) {
//    int n = arr.size();
//    vector<int> arrOut(n);
//
//    if(n == d)
//    {
//        return arr;
//    }
//    else
//    {
//        for(int i = 0; i < n; i++)
//        {
//            if((i - d) < 0)
//            {
//                arrOut[n + (i - d)] = arr[i];
//            }
//            else
//                arrOut[i - d] = arr[i];
//        }
//
//        return arrOut;
//    }
//
//
//}
//
//int main()
//{
//    ofstream fout(getenv("OUTPUT_PATH"));
//
//    string first_multiple_input_temp;
//    getline(cin, first_multiple_input_temp);
//
//    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));
//
//    int n = stoi(first_multiple_input[0]);
//
//    int d = stoi(first_multiple_input[1]);
//
//    string arr_temp_temp;
//    getline(cin, arr_temp_temp);
//
//    vector<string> arr_temp = split(rtrim(arr_temp_temp));
//
//    vector<int> arr(n);
//
//    for (int i = 0; i < n; i++) {
//        int arr_item = stoi(arr_temp[i]);
//
//        arr[i] = arr_item;
//    }
//
//    vector<int> result = rotateLeft(d, arr);
//
//    for (size_t i = 0; i < result.size(); i++) {
//        fout << result[i];
//
//        if (i != result.size() - 1) {
//            fout << " ";
//        }
//    }
//
//    fout << "\n";
//
//    fout.close();
//
//    return 0;
//}
//
//string ltrim(const string &str) {
//    string s(str);
//
//    s.erase(
//        s.begin(),
//        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//    );
//
//    return s;
//}
//
//string rtrim(const string &str) {
//    string s(str);
//
//    s.erase(
//        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//        s.end()
//    );
//
//    return s;
//}
//
//vector<string> split(const string &str) {
//    vector<string> tokens;
//
//    string::size_type start = 0;
//    string::size_type end = 0;
//
//    while ((end = str.find(" ", start)) != string::npos) {
//        tokens.push_back(str.substr(start, end - start));
//
//        start = end + 1;
//    }
//
//    tokens.push_back(str.substr(start));
//
//    return tokens;
//}
//
