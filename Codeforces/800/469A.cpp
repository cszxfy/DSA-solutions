#include<bits/stdc++.h>
using namespace std;
int main (){
    int n ;
    cin>>n;
    int x;
    cin>>x;
    int arr1[x];
    for(int i =0;i<x;i++){
        cin>>arr1[i];
    }
     int y;
    cin>>y;
    int arr2[y];
    for(int i =0;i<y;i++){
        cin>>arr2[i];
    }
    set<int>st;
    for(int i =0;i<x;i++){
        st.insert(arr1[i]);
    }
    for(int i =0;i<y;i++){
        st.insert(arr2[i]);
    }
    if(st.size()==n){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
    return 0;
}
