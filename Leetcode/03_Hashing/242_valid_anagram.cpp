/*
242_valid_anagram.cpp
*/

#include <iostream>
#include <vector>
using namespace std;

/*
LeetCode 242
Valid Anagram

Technique:
Frequency Counting
*/

class Solution {
public:

    bool isAnagram(string s, string t) {

        if(s.length() != t.length())
            return false;

        vector<int> freq(26,0);

        // count characters of s
        for(char c : s)
            freq[c - 'a']++;

        // subtract characters of t
        for(char c : t)
            freq[c - 'a']--;

        // check if all frequencies are zero
        for(int count : freq) {

            if(count != 0)
                return false;
        }

        return true;
    }
};


/* Main function */
int main() {

    Solution obj;

    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if(obj.isAnagram(s,t))
        cout << "Valid Anagram\n";
    else
        cout << "Not an Anagram\n";

    return 0;
}

/*
Solution - 2 - Sorting
*/

/*
sort(s.begin(), s.end());
sort(t.begin(), t.end());

return s == t;
*/

