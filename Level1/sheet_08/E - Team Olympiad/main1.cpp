#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> freq(4);
    vector<vector<int>> vec(4, vector<int>(5005));

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        int temp;

        cin >> temp;

        freq[temp]++;
        vec[temp][freq[temp]] = i;
    }

    int nTeams = min(freq[1], min(freq[2], freq[3]));

    cout << nTeams << '\n';

    for(int i = 1; i <= nTeams; i++)
    {
        cout << vec[1][i] << ' ' << vec[2][i] << ' ' << vec[3][i] << '\n';
    }


    return 0;
}
