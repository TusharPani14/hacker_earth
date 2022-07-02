#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    int size, c = 0;
    cin >> size;
    string s;
    cin >> s;
    string k = "";
    for (int i = 1; i <=size; i++)
    {
        if (s.substr(i-1,2)=="HH")
        {
            c = 1;
            break;
        }
        if (s.at(i-1) == 'H')
            k = k + s.at(i-1);
        else
            k = k + 'B';
    }
    if (c == 1)
        cout << "NO";
    else
    {
        cout << "YES" << endl
             << k;
    }
}