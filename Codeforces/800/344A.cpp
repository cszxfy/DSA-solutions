#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    string prev,curr;
    cin>>prev;
    int group=1;
    for(int i =1;i<n;i++){
        cin>>curr;
        if(curr!=prev){
            group++;
        }
        prev=curr;

    }
    cout<<group;
    return 0;
}