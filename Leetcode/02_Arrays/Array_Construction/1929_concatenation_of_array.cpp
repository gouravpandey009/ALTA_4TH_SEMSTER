/*
Solution 1 — Using Extra Array
*/

#include <iostream>
#include <vector>

using namespace std;

/*
    LeetCode 1929 - Concatenation of Array

    Given an integer array nums of length n,
    create an array ans of length 2n such that:

    ans = nums + nums
*/

class Solution {
public:

    vector<int> getConcatenation(vector<int>& nums) {

        int n = nums.size();

        // create result array of size 2n
        vector<int> ans(2*n);

        for(int i = 0; i < n; i++) {

            ans[i] = nums[i];      // first copy
            ans[i+n] = nums[i];    // second copy
        }

        return ans;
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

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = obj.getConcatenation(nums);

    cout << "\nConcatenated Array:\n";

    for(int x : ans)
        cout << x << " ";

    cout << endl;

    return 0;
}

/*
Solution 2 — Using push_back()
*/

/*
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    vector<int> getConcatenation(vector<int>& nums) {

        vector<int> ans;

        // first copy
        for(int x : nums)
            ans.push_back(x);

        // second copy
        for(int x : nums)
            ans.push_back(x);

        return ans;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {1,2,3};

    vector<int> ans = obj.getConcatenation(nums);

    for(int x : ans)
        cout << x << " ";

    return 0;
}

*/
