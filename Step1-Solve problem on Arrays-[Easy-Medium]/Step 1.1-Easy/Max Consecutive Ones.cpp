class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int m=0,c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                c++;
            }
           else{
            c=0;
           }
        m=max(m,c);
        }
        return m;
    }
};
