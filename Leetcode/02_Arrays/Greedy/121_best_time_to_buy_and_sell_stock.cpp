/*
Optimal Solution (Single Pass)
*/

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

/*
    LeetCode 121
    Best Time to Buy and Sell Stock

    Idea:
    Track minimum price so far
    Calculate maximum profit
*/

class Solution {
public:

    int maxProfit(vector<int>& prices) {

        int minPrice = INT_MAX;
        int maxProfit = 0;

        for(int price : prices) {

            // update minimum price
            minPrice = min(minPrice, price);

            // calculate profit
            int profit = price - minPrice;

            // update maximum profit
            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};


/*
   Main function
*/

int main() {

    Solution obj;

    int n;

    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);

    cout << "Enter stock prices:\n";

    for(int i = 0; i < n; i++)
        cin >> prices[i];

    int result = obj.maxProfit(prices);

    cout << "\nMaximum Profit: " << result << endl;

    return 0;
}