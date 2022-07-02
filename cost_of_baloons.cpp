#include <iostream>
using namespace std;
int main()
{
    int t, m, n, stu, baloon1 = 0,y=0,z=0;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> m >> n >> stu;
        int a[stu][2];
        for (int j = 0; j < stu; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cin >> a[j][k];
            }
        }
        for (int j = 0; j < stu; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                if(a[j][0]==1)
                y++;
                if(a[j][1]==1)
                z++;
            }
        }
		int x1=(z>y)?z:y;
        int b1=(m<n)?m:n;
		int x2=(z<y)?z:y;
        int b2=(m>n)?m:n;
        baloon1=b1*x1+b2*x2;
        cout << baloon1/2;
		cout << endl;
		baloon1=0;
        y=0;
        z=0;
    }
}