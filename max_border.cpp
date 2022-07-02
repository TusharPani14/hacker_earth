#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    int t, n, m, d;
    cin >> t;
    string s = "";
    int max = 0;
    for (int k = 0; k < t; k++)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            cin >> s;
            for (int p = 0; p < m; p++)
            {
                if (s.at(p) == '#')
                {
                    d = d + 1;
                }
            }
            if (d > max)
                max = d;
            d = 0;
        }
        cout << max;
        cout << endl;
        max = 0;
        s.clear();
    }
}