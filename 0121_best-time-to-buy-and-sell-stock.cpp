class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int bestBuy = prices[0];

        for(int i=1;i<prices.size();i++){
            bestBuy = min(prices[i],bestBuy);
            int profit = prices[i]-bestBuy;
            maxProfit = max(maxProfit,profit);
        }
        return maxProfit;
    }
};

// the problem states and makes it easy that the buy and sell should not be made on the similar day and the prfoit should be maximum
// we calculate the min of best buy and the max of profit so that those variables can store the required minimum and maximum
// it uses linear search and the time complexity of O(n) and space complexity as O(1)
