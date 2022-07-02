#include <iostream>
using namespace std;
int main()
{
    string s;
    int z = 0;
    cin >> s;
    s = s + " ";
    for (int i = 1; i < s.length() - 1; i++)
    {
        if ((s.at(i - 1) + s.at(i) - 96) % 2 == 0 && isdigit(s.at(i - 1)) && isdigit(s.at(i)))
            z++;
    }
    if (s.at(2) != 'A' && s.at(2) != 'E' && s.at(2) != 'I' && s.at(2) != 'O' && s.at(2) != 'U' && s.at(2) != 'Y' && z == 4)
        cout << "valid";
    else
        cout << "invalid";
}