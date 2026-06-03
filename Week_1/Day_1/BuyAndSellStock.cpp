class Solution {
public:
    int maxProfit(vector<int>& price) {
        int maxProfit = 0;
        for(int i = 0;i<price.size();i++){
            for(int j=i+1; j<price.size();j++){
                int profit = price[j] - price[i];

                if(profit > maxProfit){
                    maxProfit = profit;
            }
        }
    }
        return maxProfit;
    }
};
