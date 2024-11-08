class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int n=arr.size();
        vector<int>ans;
        if(n==0) return ans;
        
        int m=arr[n-1];
        ans.push_back(m);
        
        for(int i=n-2;i>=0;i--){
            if(arr[i]>m){
                m=arr[i];
                ans.push_back(m);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
