#include <bits/stdc++.h>

using namespace std;

int main()
{
    int no_queries;
    deque<int> dQ;
    bool is_reverse = false;
    string query;

    cin >> no_queries;

    for(int i = 0; i < no_queries; i++)
    {
        cin >> query;

        if(is_reverse)
        {
            if(query == "back")
                query = "front";
            else if(query == "front")
                query = "back";
            else if(query == "push_back")
                query = "toFront";
            else if(query == "toFront")
                query = "push_back";
        }

        if(query == "back")
        {
            if(dQ.empty())
            {
                cout << "No job for Ada?\n";
            }
            else
            {
                cout << dQ.back() << '\n';
                dQ.pop_back();
            }
        }
        else if(query == "front")
        {
            if(dQ.empty())
            {
                cout << "No job for Ada?\n";
            }
            else
            {
                cout << dQ.front() << '\n';
                dQ.pop_front();
            }
        }
        else if(query == "push_back")
        {
            int number;

            cin >> number;

            dQ.push_back(number);
        }
        else if(query == "toFront")
        {
            int number;

            cin >> number;

            dQ.push_front(number);
        }
        else if(query == "reverse")
        {
            is_reverse = !is_reverse;
        }

    }


    return 0;
}
