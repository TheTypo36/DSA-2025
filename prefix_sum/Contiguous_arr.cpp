#include <bits/stdc++.h>
using namespace std;

int findMaxLength(vector<int> &num)
{

    for (int i = 0; i < num.size(); i++)
    {
        num[i + 1] = num[i + 1] + num[i];
    }

    return (num[num.size() - 1] - num[0]) + 1;
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