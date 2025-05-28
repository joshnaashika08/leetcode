class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int n=prices.size();
        int minprice=prices[0];
        for(int i=0;i<n;i++){
            if(prices[i]<minprice)
            minprice=prices[i];
            if(prices[i]-minprice>maxprofit)
            maxprofit=prices[i]-minprice;
        }
        return maxprofit;
    }
};