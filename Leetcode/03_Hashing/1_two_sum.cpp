/*
Bruteforce
*/

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {

        for(int i = 0; i < nums.size(); i++) {

            for(int j = i + 1; j < nums.size(); j++) {

                if(nums[i] + nums[j] == target)
                    return {i, j};
            }
        }

        return {};
    }
};


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

    vector<int> result = obj.twoSum(nums, target);

    cout << "Indices: " << result[0] << " " << result[1];

    return 0;
}

/*
Solution - 2 - Hashmap
*/

/*
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> mp;

        for(int i = 0; i < nums.size(); i++) {

            int complement = target - nums[i];

            if(mp.count(complement))
                return {mp[complement], i};

            mp[nums[i]] = i;
        }

        return {};
    }
};

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

    vector<int> ans = obj.twoSum(nums, target);

    cout << "Indices: " << ans[0] << " " << ans[1];

    return 0;
}
*/

