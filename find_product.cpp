#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    long long p = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        p = (p * a[i]) % ((int)(pow(10, 9)+7));
    }
    cout << p;
}