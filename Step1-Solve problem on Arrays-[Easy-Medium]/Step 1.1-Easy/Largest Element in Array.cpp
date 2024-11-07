#include <bits/stdc++.h> 
int largestElement(vector<int> &arr) {
	
   /* 
     brute force
   int n=arr.size();
   sort(arr.begin(),arr.end());
    return arr[n-1]; */
    
       int n=arr.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]> maxi)
            {
                maxi=arr[i];
            }
        }
        return maxi;
}
