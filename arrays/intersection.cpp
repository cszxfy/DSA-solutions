#include<bits/stdc++.h>
using namespace std;
/*https://www.geeksforgeeks.org/problems/intersection-of-two-sorted-array-1587115620/1*/
class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        int n =arr1.size();
        int m =arr2.size();
        vector<int>ans;
        vector<int> vis(m,0);
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr1[i]==arr2[j] && vis[j]==0){
                    if(ans.size()==0 || ans.back()!=arr1[i]){
                    ans.push_back(arr1[i]);
                   } 
                   vis[j]=1;
                    break;
                    
                }
                 
            }
        }
        return ans;//BRUTE FORCE GOT TLE; BUT VALID ANS.
    }
};
//optimal approach;
class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        int n =arr1.size();
        int m =arr2.size();
        int i=0;
        int j=0;
        vector<int>ans;
        while(i<n &&j<m){
            if(arr1[i]<arr2[j]){
                i++;
            }
            else if(arr1[i]>arr2[j]){
                j++;
            }
            else{
                if(ans.size()==0 ||ans.back()!=arr1[i]){
                    ans.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }
        
        
        return ans; 
    }
};