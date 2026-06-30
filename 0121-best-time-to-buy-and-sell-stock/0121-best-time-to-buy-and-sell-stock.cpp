class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxProfit=0;
       int buy=prices[0];
       for(int i=1; i<prices.size(); i++){
         buy= min(prices[i],buy);
         int profit=(prices[i]-buy);
         maxProfit= max(profit,maxProfit);
    }
    return maxProfit;
    } 
};