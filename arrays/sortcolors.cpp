#include<bits/stdc++.h>
using namespace std;
//app1:
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n =nums.size();
        int count0=0, count1=0,count2=0;
        for(int i =0;i<n;i++){
            if(nums[i]==0) count0++;
            else if(nums[i]==1) count1++;
            else count2++;
        }
        int idx=0;
        while(count0--){
            nums[idx]=0;
            idx++;
        }
        while(count1--){
            nums[idx]=1;
            idx++;
        }
        while(count2--){
            nums[idx++]=2;
        }
    }
};
//optimal using dnf:
class Solution {
public:
    void sortColors(vector<int>& nums) {
     int n=nums.size();
     int low=0,mid=0,high=n-1;
     while(mid<=high){
        if(nums[mid]==0){
           swap(nums[low],nums[mid]);
           low++;
            mid++;
        }else if(nums[mid]==1){
          mid++;
        }else{
          swap(nums[mid],nums[high]);
          high--;
        }
     }
    }
};