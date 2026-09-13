class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxu=0;
        int mint=INT_MAX;
        
        for(int i=0;i<prices.size();i++){
           mint=min(mint,prices[i]);
           maxu=max(maxu,prices[i]-mint);
        }
        return maxu;
    
   

    }
};