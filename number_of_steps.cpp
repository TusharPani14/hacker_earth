#include <iostream>
using namespace std;
int main()
{
    int size, min, c, k=0;
	int d = 0;
    cin >> size;
    int a[size], b[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    min = a[0];
    for (int i = 0; i < size; i++)
    {
        cin >> b[i];
    }
    for (int i = 1; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            c = i;
        }
    }
    for (int i = 0; i < size; i++)
    {
        while (a[i] > min)
        {
            a[i] = a[i] - b[i];
            d = d + 1;
        }
        if (a[i] < min)
        {
            k = -1;
            break;
        }
    }
    if (k == -1)
        cout << k;
    else
        cout << d;
}