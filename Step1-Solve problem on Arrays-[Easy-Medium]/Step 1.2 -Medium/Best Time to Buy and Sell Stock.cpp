class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int p=0,buy=prices[0];
        for(int i=1;i<n;i++){
            if(buy>prices[i]){
                buy=prices[i];
            }
            p=max(p,prices[i]-buy);
        }
        return p;
    }
