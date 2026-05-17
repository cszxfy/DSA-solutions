#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int p ;
   long double sum =0;
    for(int i =0;i<n;i++){
        cin>>p;
        sum+=p;
    }
    long double ans=(sum/n);
    cout<<ans;
    return 0;
}