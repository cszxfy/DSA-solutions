#include<bits/stdc++.h>
using namespace std;
int main (){
    int k,m,b;
    cin>>k>>m>>b;
    int count=0;
    for(int i =1;i<=b;i++){
        count+=k*i;
    }
    int ans=count-m;
    if(ans<0){
        ans=0;
    }
    cout<<ans;
    return 0;
}