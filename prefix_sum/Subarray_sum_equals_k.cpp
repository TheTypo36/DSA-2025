#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> prefixSum(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        prefixSum[i + 1] = prefixSum[i] + nums[i];
        cout << prefixSum[i] << endl;
    }
    cout << prefixSum[n] << endl;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (prefixSum[j + 1] - prefixSum[i] == k)
            {
                count++;
            }
        }
    }

    return count;
}


int subarraySum_optimized(vector<int> &nums, int k){

          unordered_map<int,int> previousSum;
        previousSum[0] = 1;  // base case

        int currSum = 0, count = 0;
        for(int num : nums) {
            currSum += num;
            
            // add how many times (currSum - k) appeared
            count += previousSum[currSum - k];
            
            // record current prefix sum
            previousSum[currSum]++;
        }

        return count;
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
    int k;
    cin >> k;
    cout << subarraySum(arr, k) << endl;
}