#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s = "";
    cin >> s;
    int c=0, d=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == 'z')
            c++;
        else
            d++;
    }
    if (c * 2 == d)
        cout << "Yes";
        else 
        cout << "No";
}
