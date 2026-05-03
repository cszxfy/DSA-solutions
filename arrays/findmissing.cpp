#include<bits/stdc++.h>
using namespace std;
/*https://leetcode.com/problems/missing-number/*/
//brute:
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(nums[0]!=0) return 0;
        if(nums[n-1]!=n) return n ;
        for(int i =1;i<n;i++){
            if(nums[i]!=i){
                return i ;
            }
        }
        return 0;
    }
};
//optimal
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        int sum=n*(n+1)/2;
        int s=0;
        for(int i=0;i<n;i++){
            s+=nums[i];
        }
        return(sum-s);
    }
};