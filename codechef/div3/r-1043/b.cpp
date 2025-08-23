#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    while (t--)
    {
        int n;
        cin >> n;
        int x, y;
        vector<long long int> ans;

        for (long long int k = 1; k < 18; k++)
        {
            long long den = (long long)pow(10.0, k);
            if (n % den == 0)
            {
                ans.push_back(den);
            }
        }

        if (ans.size() == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            for (auto &i : ans)
            {
                cout << i << endl;
            }
        }
    }
}