/*
Recursion
*/

#include <iostream>
using namespace std;

/*
LeetCode 509
Fibonacci Number

Recursive definition:
F(n) = F(n-1) + F(n-2)
*/

class Solution {
public:

    int fib(int n) {

        // base cases
        if(n <= 1)
            return n;

        return fib(n-1) + fib(n-2);
    }
};


/* Main function */
int main() {

    Solution obj;

    int n;

    cout << "Enter n: ";
    cin >> n;

    int result = obj.fib(n);

    cout << "Fibonacci number = " << result << endl;

    return 0;
}

/*
Solution 2 — Optimal (Dynamic Programming)
*/

/*
#include <iostream>
using namespace std;

class Solution {
public:

    int fib(int n) {

        if(n <= 1)
            return n;

        int prev2 = 0;
        int prev1 = 1;

        for(int i = 2; i <= n; i++) {

            int curr = prev1 + prev2;

            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};

int main() {

    Solution obj;

    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci number = " << obj.fib(n) << endl;

    return 0;
}
*/
