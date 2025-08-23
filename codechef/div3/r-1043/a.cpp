#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        string a, b;
        cin >> n >> a >> m >> b;

        string c;
        cin >> c;

        int i = 0;
        int j = 0;
        while (i < m)
        {
            if (c[j] == 'D')
            {
                a += b[i];
            }
            else
            {
                a = b[i] + a;
            }

            i++;
            j++;
        }

        cout << a << endl;
    }
}