#include<bits/stdc++.h>
using namespace std;
//brute:
 class Solution {
public:
    void markrow(vector<vector<int>>& matrix, int i, int m) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] != 0) {
                matrix[i][j] = INT_MIN;
            }
        }
    }
    void markcol(vector<vector<int>>& matrix, int j, int n) {
        for(int i = 0; i < n; i++) {
            if(matrix[i][j] != 0) {
                matrix[i][j] = INT_MIN;
            }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == 0) {
                    markrow(matrix, i, m);
                    markcol(matrix, j, n);
                }
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == INT_MIN) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
//better:
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n =matrix.size();
        int m = matrix[0].size();
         vector<int> row(n, 0);
         vector<int> col(m, 0);
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(row[i]==1 || col[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
    }
};
//optimal: