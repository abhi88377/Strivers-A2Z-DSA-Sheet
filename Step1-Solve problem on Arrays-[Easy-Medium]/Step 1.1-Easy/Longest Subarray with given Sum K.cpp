//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        map<int,int>m;
        m[0]=-1;
        int l=0,s=0;
        for(int i=0;i<n;i++){
            s=s+arr[i];
            
            if(s==k){
                l=max(l,i+1);
            }
            if(m.find(s-k)!=m.end()){
                l=max(l,i-m[s-k]);
            }
            if(m.find(s)==m.end()){
               m [s]=i;
            }
        }
        return l;
    }
};
