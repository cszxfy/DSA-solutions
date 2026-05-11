#include<iostream>
using namespace std;
int main (){
    int t ;
    cin>>t;
    int maxlen=0,c =0;
    while(t--){
     int a ,b;
     cin>>a>>b;
     c-=a;
     c+=b;
     maxlen=max(maxlen,c);
    }
    cout<<maxlen;
    return 0;
}