#include <iostream>
using namespace std;
int main()
{
    string s, k = "";
    char c;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (islower(s.at(i)))
        {
            c = toupper(s.at(i));
            k = k + c;
        }
        else
        {
            c = tolower(s.at(i));
            k = k + c;
        }
    }
    cout << k;
}