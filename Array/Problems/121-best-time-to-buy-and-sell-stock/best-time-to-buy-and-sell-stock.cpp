class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minPrice = prices[0];
       int maxProfit = 0;
       
       for ( int i = 0; i < prices.size(); i++) {
           int currentPrice = prices[i];
           if ( prices[i] < minPrice ) {
               minPrice = prices[i];
           } 
           int profit = currentPrice - minPrice;
           if (profit > maxProfit)
{
    maxProfit = profit;
}
           
           
       }
       return maxProfit; 
    
    }
    
    
};