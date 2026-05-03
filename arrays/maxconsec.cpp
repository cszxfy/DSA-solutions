#include<bits/stdc++.h>
using namespace std;
/*https://leetcode.com/problems/max-consecutive-ones/submissions/1994253818/*/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n =nums.size();
        int count=0;
        int maxi=0;
        for(int i =0;i<n;i++){
            if(nums[i]==1){
             count++;
             maxi=max(maxi,count);
            }
         else{
            count=0;
         }
            
        }
        return maxi;
    }
};