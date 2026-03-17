#include <iostream>
#include <vector>
#include <climits>

using namespace std;

/*
 LeetCode 209
 Minimum Size Subarray Sum

 Technique:
 Sliding Window
*/

class Solution {
public:

    int minSubArrayLen(int target, vector<int>& nums) {

        int left = 0;
        int sum = 0;
        int minLen = INT_MAX;

        for(int right = 0; right < nums.size(); right++) {

            sum += nums[right];

            // shrink window when sum >= target
            while(sum >= target) {

                minLen = min(minLen, right - left + 1);

                sum -= nums[left];
                left++;
            }
        }

        if(minLen == INT_MAX)
            return 0;

        return minLen;
    }
};


/* main function*/
int main() {

    Solution obj;

    int n, target;

    cout << "Enter array size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements:\n";

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    cout << "Enter target: ";
    cin >> target;

    int ans = obj.minSubArrayLen(target, nums);

    cout << "\nMinimum Length = " << ans << endl;

    return 0;
}