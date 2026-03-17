/*
Solution 1 — Bit Trick
*/

#include <iostream>
using namespace std;

/*
LeetCode 231
Power of Two

Bit manipulation trick:
n & (n-1) removes the lowest set bit.
*/

class Solution {
public:

    bool isPowerOfTwo(int n) {

        if(n <= 0)
            return false;

        return (n & (n - 1)) == 0;
    }
};


/* Main function */
int main() {

    Solution obj;

    int n;

    cout << "Enter number: ";
    cin >> n;

    bool result = obj.isPowerOfTwo(n);

    if(result)
        cout << "Power of Two\n";
    else
        cout << "Not a Power of Two\n";

    return 0;
}