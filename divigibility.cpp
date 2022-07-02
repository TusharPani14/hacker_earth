#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    if (a[size-1] % 10 == 0)
        cout << "Yes";
    else
        cout << "No";
}