#include<bits/stdc++.h>
using namespace std;
/* https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1*/
//brute force:got tle:
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
         int n =arr.size();
         int len=0;
         for(int i =0;i<n;i++){
             int sum=0;
             for(int j=i;j<n;j++){
                 sum+=arr[j];
                if(sum==k){
                    len=max(len,j-i+1);
                }
                 
             }
         }
         return len;
        
    }
};