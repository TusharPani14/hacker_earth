#include <iostream>
using namespace std;
int main()
{
    int t, sticks;
    string n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int sum = 0;
        char c;
        for (int j = 0; j < n.length(); j++)
        {
            c = n.at(j);
            switch (c)
            {
            case '0':
                sticks = 6;
                break;
            case '1':
                sticks = 2;
                break;
            case '2':
                sticks = 5;
                break;
            case '3':
                sticks = 5;
                break;
            case '4':
                sticks = 4;
                break;
            case '5':
                sticks = 5;
                break;
            case '6':
                sticks = 6;
                break;
            case '7':
                sticks = 3;
                break;
            case '8':
                sticks = 7;
                break;
            case '9':
                sticks = 6;
                break;
            default:
                break;
            }
            sum = sum + sticks;
        }
        if (sum % 2 == 0)
        {
            for (int i = 0; i < sum / 2; i++)
            {
                cout << 1;
            }
        }
        if (sum % 2 != 0)
        {
            cout << 7;
            for (int i = 0; i < ((sum - 3) / 2); i++)
            {
                cout << 1;
            }
        }
        cout << endl;
    }
}
