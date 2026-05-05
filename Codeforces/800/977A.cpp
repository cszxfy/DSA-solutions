#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,k;
    cin>>x>>k;
    int i =0;
    while(i<k){
        if(x%10==0){
            x/=10;
        }
        else{
            x-=1;
        }
        i++;
    }
    cout<<x;
    return 0;
}