class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int left = 0;
        int right = 1;
        while(left < prices.size()-1){
            int temp = prices[right] - prices[left];
            if(right == prices.size()-1){
                left ++;
                right = left +1;
            }else{
                right ++;
            }
            if(temp > profit){
                profit = temp;
            }
        }
        return profit ;
    }
};
