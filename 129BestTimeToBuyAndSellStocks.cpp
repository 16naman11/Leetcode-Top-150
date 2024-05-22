class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = prices[0];
        int maxp = 0;

        for(int i=1;i<prices.size();i++){
            maxp = max(maxp,prices[i]-minp);
            minp = min(prices[i],minp);
        }

        return maxp;
    }
};