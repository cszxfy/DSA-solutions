#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        long long maxi = -1;
        long long sum = 0;
        int start = 0;
        int astart = -1;
        int end = -1;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] >= 0) {
                sum += arr[i];
                if(sum > maxi ||
                  (sum == maxi && (i - start > end - astart))) {
                    maxi = sum;
                    astart = start;
                    end = i;
                }
            }
            else {
                sum = 0;
                start = i + 1;
            }
        }
        if(astart == -1)
            return {-1};
        vector<int> ans;
        for(int i = astart; i <= end; i++) {
            ans.push_back(arr[i]);
        }
        return ans;
    }
};