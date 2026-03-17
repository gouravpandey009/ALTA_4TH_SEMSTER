#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
LeetCode 125
Valid Palindrome

Technique:
Two Pointers
*/

class Solution {
public:

    bool isPalindrome(string s) {

        int left = 0;
        int right = s.length() - 1;

        while(left < right) {

            // skip non-alphanumeric characters
            while(left < right && !isalnum(s[left]))
                left++;

            while(left < right && !isalnum(s[right]))
                right--;

            // compare characters ignoring case
            if(tolower(s[left]) != tolower(s[right]))
                return false;

            left++;
            right--;
        }

        return true;
    }
};


/* Main function*/
int main() {

    Solution obj;

    string s;

    cout << "Enter string: ";
    getline(cin, s);

    bool result = obj.isPalindrome(s);

    if(result)
        cout << "Valid Palindrome\n";
    else
        cout << "Not a Palindrome\n";

    return 0;
}