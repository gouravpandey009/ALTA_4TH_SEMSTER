/*
Solution 1 — Two Pointers
*/

#include <iostream>
#include <vector>
using namespace std;

/*
LeetCode 344
Reverse String
*/

class Solution {
public:

    void reverseString(vector<char>& s) {

        int left = 0;
        int right = s.size() - 1;

        while(left < right) {

            // swap characters
            swap(s[left], s[right]);

            left++;
            right--;
        }
    }
};


/* Main function*/
int main() {

    Solution obj;

    int n;

    cout << "Enter number of characters: ";
    cin >> n;

    vector<char> s(n);

    cout << "Enter characters:\n";

    for(int i = 0; i < n; i++)
        cin >> s[i];

    obj.reverseString(s);

    cout << "\nReversed string:\n";

    for(char c : s)
        cout << c << " ";

    return 0;
}

/*
2nd Solution — Using STL reverse()
*/

/*
#include <algorithm>
reverse(s.begin(), s.end());
*/
