#include<bits/stdc++.h>
using namespace std;
/*https://www.geeksforgeeks.org/problems/find-unique-number/1*/
//brute force:
class Solution {
  public:
    int findUnique(vector<int> &arr) {
        int n =arr.size();
        for(int i =0;i<n;i++){
            int nums=arr[i];
            int count=0;
            for(int j =0;j<n;j++){
                if(arr[j]==nums){
                    count++;
                }
            }
          if(count==1) return nums;
        }
        return -1;
    }
};
//better: