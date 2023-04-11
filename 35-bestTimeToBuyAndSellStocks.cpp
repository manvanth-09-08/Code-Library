https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=100000;
        int sell=-1;
        int profit=INT_MIN;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<buy){
                buy=prices[i];
                sell=prices[i];
            }

            else if(prices[i]>sell)
                sell=prices[i];

            if((sell-buy)>profit)
                profit=sell-buy;
        }
        if(profit>0)
        return profit;

        else return 0;
        
    }
}; 