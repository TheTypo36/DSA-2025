#include <bits/stdc++.h>
using namespace std;

int findMaxLength(vector<int> &num)
{
    int n = num.size();
    unordered_map<int, int> f;
    int maxLen = 0;
    f[0] = -1;
    int ps = 0;
    for (int i = 0; i < n; i++)
    {
        ps += (num[i] == 0) ? -1 : +1;
        if (f.count(ps))
        {
            maxLen = max(maxLen, i + 1 - f[ps]);
        }
        else
        {
            f[ps] = i;
        }
    }

    return maxLen;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (auto &i : arr)
    {
        cin >> i;
    }
    cout << findMaxLength(arr) << endl;
}