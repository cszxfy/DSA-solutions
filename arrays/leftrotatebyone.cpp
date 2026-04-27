 /*https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/0*/
 
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void rotate(vector<int> &arr) {
    int n=arr.size();
    int x=arr[n-1];//not n c f 0 ;lopp gthan 0 so it will reach till the first element
    for(int i =n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=x;
        
    }
};