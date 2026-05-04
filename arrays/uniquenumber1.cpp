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
 class Solution {
  public:
    int findUnique(vector<int> &arr) {
        int n = arr.size();

        int maxi = arr[0];
        for(int i = 0; i < n; i++){
            maxi = max(maxi, arr[i]);
        }

        vector<int> hash(maxi + 1, 0); 

        for(int i = 0; i < n; i++){
            hash[arr[i]]++;
        }

        for(int i = 0; i < n; i++){
            if(hash[arr[i]] == 1){
                return arr[i];
            }
        }

        return -1;   
    }
};//here my silly doubt was why like finding max i but i forogt about hash array like we have to store till the last max elemnt to store the freq;