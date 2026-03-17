/*
Optimal Solution (Kadane’s Algorithm)
*/

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

/*
    LeetCode 53
    Maximum Subarray

    Use Kadane's Algorithm
*/

class Solution {
public:

    int maxSubArray(vector<int>& nums) {

        int currentSum = nums[0];
        int maxSum = nums[0];

        for(int i = 1; i < nums.size(); i++) {

            // either extend the subarray or start new
            currentSum = max(nums[i], currentSum + nums[i]);

            // update maximum sum
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};


/*
    Main function
*/

int main() {

    Solution obj;

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements:\n";

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    int result = obj.maxSubArray(nums);

    cout << "\nMaximum Subarray Sum: " << result << endl;

    return 0;
}
