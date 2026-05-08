#include<bits/stdc++.h>
using namespace std;
int main (){
    int x ;
    cin >>x;
    string s ;
    cin >>s;
    int c=0;
    int g =0;
    for(int i =0;i<s.size();i++){
         if(s[i]=='A'){
            c++;
         }
         else{
            g++;
         }
    }
    if(c>g){
        cout<<"Anton";
    }
    else if(c<g){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}