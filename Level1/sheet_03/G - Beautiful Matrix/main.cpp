#include <iostream>

using namespace std;

int main()
{
    short ans;
    unsigned short i, j, r_no, c_no;
    unsigned short matrix[5][5];

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];

            if(matrix[i][j] == 1)
            {
                r_no = i + 1;
                c_no = j + 1;
            }
        }

    }

    r_no = (r_no > 3)? r_no - 3 : 3 - r_no;
    c_no = (c_no > 3)? c_no - 3 : 3 - c_no;

    ans = r_no + c_no;

    cout << ans;

    return 0;
}
