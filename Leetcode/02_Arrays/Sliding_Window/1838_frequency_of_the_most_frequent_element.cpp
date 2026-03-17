#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
LeetCode 1838
Frequency of the Most Frequent Element

Technique:
Sliding Window + Sorting
*/

class Solution {
public:

    int maxFrequency(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        long long sum = 0;
        int left = 0;
        int maxFreq = 1;

        for(int right = 0; right < nums.size(); right++) {

            sum += nums[right];

            // check if operations exceed k
            while((long long)nums[right] * (right - left + 1) - sum > k) {

                sum -= nums[left];
                left++;
            }

            maxFreq = max(maxFreq, right - left + 1);
        }

        return maxFreq;
    }
};


/* Main function  */
int main() {

    Solution obj;

    int n, k;

    cout << "Enter array size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> nums[i];

    cout << "Enter k: ";
    cin >> k;

    int ans = obj.maxFrequency(nums, k);

    cout << "Maximum Frequency = " << ans << endl;

    return 0;
}