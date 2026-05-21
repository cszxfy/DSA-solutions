#include<bits/stdc++.h>
using namespace std;
//better soln:
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n =nums.size();
        if(n== 0) return 0;
        sort(nums.begin(), nums.end());
        int longest = 1;
        int cnt = 0;
        int lastSmaller = INT_MIN;
        for(int i = 0; i < n; i++) {
            if(nums[i] - 1 == lastSmaller) {
                cnt++;
                lastSmaller = nums[i];
            }
            else if(nums[i] != lastSmaller) {
                cnt = 1;
                lastSmaller = nums[i];
            }
            longest = max(longest, cnt);
        }
        return longest;
    }
};
//optimal soln:
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int longest=1;
        if(n==0) return 0;
       unordered_set<int>st;
        for(int i =0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it :st){
            if(st.find(it-1)==st.end()){
               int cnt=1;
               int x=it;
            while(st.find(x+1)!=st.end()){
                cnt++;
                x++;
            }
            longest=max(longest,cnt);
            }
        }
        return longest;
    }
};