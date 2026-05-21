#include<bits/stdc++.h>
using namespace std;
int main (){
    int n =4;
     set<int>st;
     for(int i =0;i<n;i++){
        int x;
        cin>>x;
        st.insert(x);
     }
    cout<<4-st.size();
}