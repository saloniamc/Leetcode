class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int min = prices[0];
        int maxProfit = 0;

        if (prices.empty()) 
            return 0;

        for(int i = 1 ; i < prices.size(); i++)
        {
            if(prices[i] < min)
                min = prices[i];
            else
                maxProfit = max(maxProfit, prices[i] - min);

        }    
        return maxProfit;   
    }
};