/*https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1*/
#include<bits/stdc++.h>
using namespace std;
//app1:
 class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        set<int> st;

        for(int i = 0; i < a.size(); i++){
            st.insert(a[i]);
        }

        for(int i = 0; i < b.size(); i++){
            st.insert(b[i]);
        }

        vector<int> ans;

        for(auto it : st){
            ans.push_back(it);
        }

        return ans;
    }
};
//app2:(optimized )
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int n = a.size();
        int m = b.size();

        int i = 0, j = 0;
        vector<int> ans;

        while(i < n && j < m){
            if(a[i] <= b[j]){
                if(ans.size() == 0 || ans.back() != a[i]){
                    ans.push_back(a[i]);
                }
                i++;
            }
            else{
                if(ans.size() == 0 || ans.back() != b[j]){
                    ans.push_back(b[j]);
                }
                j++;
            }
        }

        while(i < n){
            if(ans.size() == 0 || ans.back() != a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }

        while(j < m){
            if(ans.size() == 0 || ans.back() != b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }

        return ans;
    }
};