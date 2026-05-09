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
//better soln:using hashmap:
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }
        long long rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
 
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
    }
};