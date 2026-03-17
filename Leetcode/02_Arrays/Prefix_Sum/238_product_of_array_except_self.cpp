/*
Optimal Solution — Prefix + Suffix Product O(1)
*/


#include <iostream>
#include <vector>
using namespace std;

/*
LeetCode 238
Product of Array Except Self

Technique:
Prefix Product + Suffix Product
*/

class Solution {
public:

    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> result(n,1);

        // Step 1: build prefix product
        for(int i = 1; i < n; i++) {
            result[i] = result[i-1] * nums[i-1];
        }

        // Step 2: build suffix product
        int suffix = 1;

        for(int i = n-1; i >= 0; i--) {

            result[i] = result[i] * suffix;

            suffix *= nums[i];
        }

        return result;
    }
};


/* Main function */
int main() {

    Solution obj;

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements:\n";

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    vector<int> ans = obj.productExceptSelf(nums);

    cout << "\nResult array:\n";

    for(int x : ans)
        cout << x << " ";

    return 0;
}