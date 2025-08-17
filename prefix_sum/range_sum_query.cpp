#include <bits/stdc++.h>
using namespace std;
class NumArray
{
    vector<int> prefixSum;

public:
    NumArray(vector<int> &nums)
    {
        int n = nums.size();
        prefixSum.resize(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }
    }
    int sumRange(int left, int right)
    {
        return prefixSum[right + 1] - prefixSum[left];
    }
};
int main()
{
    int n, left, right;
    cin >> n >> left >> right;
    vector<int> arr(n, 0);
    for (auto &i : arr)
    {
        cin >> i;
    }

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
}