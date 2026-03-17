#include <iostream>
#include <vector>

using namespace std;

/*
    LeetCode 303
    Range Sum Query - Immutable

    Use Prefix Sum to answer queries in O(1)
*/

class NumArray {

private:
    vector<int> prefix;

public:

    NumArray(vector<int>& nums) {

        int n = nums.size();

        prefix.resize(n);

        prefix[0] = nums[0];

        // build prefix sum
        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i-1] + nums[i];
        }
    }

    int sumRange(int left, int right) {

        if(left == 0)
            return prefix[right];

        return prefix[right] - prefix[left-1];
    }
};


/*
    Main function 
*/

int main() {

    int n;

    cout << "Enter array size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements:\n";

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    NumArray obj(nums);

    int q;

    cout << "Enter number of queries: ";
    cin >> q;

    while(q--) {

        int l, r;

        cout << "Enter left and right index: ";
        cin >> l >> r;

        cout << "Sum = " << obj.sumRange(l, r) << endl;
    }

    return 0;
}