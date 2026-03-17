#include <iostream>
using namespace std;

/*
LeetCode 50
Pow(x, n)

Technique:
Binary Exponentiation
Divide and Conquer
*/

class Solution {
public:

    double myPow(double x, int n) {

        long long N = n;  

        if(N < 0) {
            x = 1 / x;
            N = -N;
        }

        double result = 1;

        while(N > 0) {

            // if exponent is odd
            if(N % 2 == 1)
                result *= x;

            x *= x;
            N /= 2;
        }

        return result;
    }
};


/* Main function */

int main() {

    Solution obj;

    double x;
    int n;

    cout << "Enter base (x): ";
    cin >> x;

    cout << "Enter power (n): ";
    cin >> n;

    double result = obj.myPow(x, n);

    cout << "Result = " << result << endl;

    return 0;
}