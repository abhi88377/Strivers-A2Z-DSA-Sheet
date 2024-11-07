

class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        int l=-1,sl=-1;
        if(n<2){
            return -1;
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]>l){
                sl=l;
                l=arr[i];
                
            }
            else if(arr[i]>sl && arr[i]<l)
            {
                sl=arr[i];
            }
        }
        return sl;
    }
};




