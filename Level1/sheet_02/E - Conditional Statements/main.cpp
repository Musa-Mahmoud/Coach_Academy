#include <iostream>

using namespace std;

int main()
{
    unsigned int n;

    cin >> n;

    /*
    switch(n)
    {
        case 1 : cout << "one";     break;
        case 2 : cout << "two";     break;
        case 3 : cout << "three";   break;
        case 4 : cout << "four";    break;
        case 5 : cout << "five";    break;
        case 6 : cout << "six";     break;
        case 7 : cout << "seven";   break;
        case 8 : cout << "eight";   break;
        case 9 : cout << "nine";    break;
        default: cout << "Greater than 9";
    }
    */

    if(1 == n)
    {
        cout << "one";
    }
    else if(2 == n)
    {
        cout << "two";
    }
    else if(3 == n)
    {
        cout << "three";
    }
    else if(4 == n)
    {
        cout << "four";
    }
        else if(5 == n)
    {
        cout << "five";
    }
        else if(6 == n)
    {
        cout << "six";
    }
        else if(7 == n)
    {
        cout << "seven";
    }
        else if(8 == n)
    {
        cout << "eight";
    }
        else if(9 == n)
    {
        cout << "nine";
    }
    else
    {
        cout << "Greater than 9";
    }

    return 0;
}
