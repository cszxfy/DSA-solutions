#include<bits/stdc++.h>
using namespace std;
//brute force:
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n =nums.size();
        vector<int> pos;
        vector<int> neg;
        for(int i = 0; i < n; i++) {
            if(nums[i] > 0) {
                pos.push_back(nums[i]);
            }
            else {
                neg.push_back(nums[i]);
            }
        }
        vector<int> ans;
        for(int i = 0; i < pos.size(); i++) {
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
        /*here we an also create the ans arr then we will do 
        ans[2*i]=pos[i]
        ans[2*i+1]=neg[i]*/
    }
};
//optimal soln:
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n =nums.size();
        int pos=0,neg=1;
        vector<int> ans(n,0);
        for(int i =0;i<n;i++){
           if(nums[i]<0){
            ans[neg]=nums[i];
            neg+=2;
           }
           else{
            ans[pos]=nums[i];
            pos+=2;
           }
        }
        return ans;
    }
};