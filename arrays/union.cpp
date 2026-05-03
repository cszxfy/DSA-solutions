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