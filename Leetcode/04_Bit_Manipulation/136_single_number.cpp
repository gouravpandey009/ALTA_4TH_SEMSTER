/*
Optimal Solution (XOR Method)
*/

#include <iostream>
#include <vector>

using namespace std;

/*
    LeetCode 136
    Single Number

    Every element appears twice except one.
    Use XOR property to find unique number.
*/

class Solution {
public:

    int singleNumber(vector<int>& nums) {

        int result = 0;

        // XOR all elements
        for(int num : nums) {
            result ^= num;
        }

        return result;
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

    int ans = obj.singleNumber(nums);

    cout << "\nSingle Number: " << ans << endl;

    return 0;
}

/*
Solution 2 — Using Hash Map
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:

    int singleNumber(vector<int>& nums) {

        unordered_map<int,int> freq;

        for(int num : nums)
            freq[num]++;

        for(auto &p : freq)
            if(p.second == 1)
                return p.first;

        return -1;
    }
};



