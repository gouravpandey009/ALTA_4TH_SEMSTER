/*
Optimal Solution — Two Pointers (O(n), In-place)
*/

#include <iostream>
#include <vector>
using namespace std;

/*
LeetCode 283
Move Zeroes

Technique:
Two Pointers
*/

class Solution {
public:

    void moveZeroes(vector<int>& nums) {

        int pos = 0; // position to place next non-zero

        // move all non-zero elements forward
        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] != 0) {
                nums[pos] = nums[i];
                pos++;
            }
        }

        // fill remaining positions with zero
        while(pos < nums.size()) {
            nums[pos] = 0;
            pos++;
        }
    }
};


/* Main function for VS Code */
int main() {

    Solution obj;

    int n;

    cout << "Enter array size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements:\n";

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    obj.moveZeroes(nums);

    cout << "\nArray after moving zeroes:\n";

    for(int x : nums)
        cout << x << " ";

    return 0;
}

/*
Solution  2 — Swap Method
*/

/*
void moveZeroes(vector<int>& nums) {

    int pos = 0;

    for(int i = 0; i < nums.size(); i++) {

        if(nums[i] != 0) {
            swap(nums[i], nums[pos]);
            pos++;
        }
    }
}
*/