class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int neg=1,pos=0;
        vector<int>ans(n,0);
       for(int i=0;i<n;i++){
        if(nums[i]<0){
            ans[neg]=nums[i];
            neg=neg+2;
        }
        else{
            ans[pos]=nums[i];
            pos=pos+2;

        }
       }
       return ans;
    }
};
