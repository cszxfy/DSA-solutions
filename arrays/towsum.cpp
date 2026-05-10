#include<bits/stdc++.h>
using namespace std;
//bf-app on^2:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n =nums.size();
       for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
       }
       return {};
    }
};
//better app:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n =nums.size();
        map<int,int>mpp;
        for(int i =0;i<n;i++){
            int sum=target-nums[i];
            if(mpp.find(sum)!=mpp.end()){
                return {mpp[sum],i};
            }
            mpp[nums[i]]=i;
        }
        return{};
    }
};
