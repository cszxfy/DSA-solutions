#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n =nums.size();
       int i=0;
       for(int j =1;j<n;j++){
         if(nums[j]!=nums[i]){
            nums[i+1]=nums[j];//here no i was thinkg about n[0] we are not saving it but it considered unqie and we are seting it as it is so we are chaning from 1;
            i++;
         }
       }
       return(i+1);//if we calculate the intex it will c n-1 so +1;

    }
};