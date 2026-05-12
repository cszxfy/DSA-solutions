#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int j;
    int sum=0;
    for(int i =0;i<n;i++){
        cin>>j;
        sum+=j;
    }
    if(sum>=1){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
    return 0;
}