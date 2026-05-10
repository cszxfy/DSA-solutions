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
//slightly better appraoch(but here space comp inc):
 class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>> arr;
        for(int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }
        sort(arr.begin(), arr.end());
        int left = 0;
        int right = n - 1;
        while(left < right) {
            int sum = arr[left].first + arr[right].first;
            if(sum == target) {
                return {
                    arr[left].second,
                    arr[right].second
                };
            }
            else if(sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
        return {};
    }
};
