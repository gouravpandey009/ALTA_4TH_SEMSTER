/*
Optimal Solution — Prefix Sum
*/

#include <iostream>
#include <vector>
using namespace std;

/*
LeetCode 724
Find Pivot Index

Technique:
Prefix Sum
*/

class Solution {
public:

    int pivotIndex(vector<int>& nums) {

        int totalSum = 0;

        // Step 1: calculate total sum
        for(int num : nums)
            totalSum += num;

        int leftSum = 0;

        // Step 2: traverse array
        for(int i = 0; i < nums.size(); i++) {

            int rightSum = totalSum - leftSum - nums[i];

            if(leftSum == rightSum)
                return i;

            leftSum += nums[i];
        }

        return -1;
    }
};


/* Main function*/
int main() {

    Solution obj;

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements:\n";

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    int ans = obj.pivotIndex(nums);

    cout << "\nPivot Index = " << ans << endl;

    return 0;
}