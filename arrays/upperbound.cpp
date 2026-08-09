#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int n =arr.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]>target){
                n=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return n;
        
    }
};
