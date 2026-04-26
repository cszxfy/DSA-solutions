#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string s1;
    cin>>s1;
    int r = s.compare(s1);
    if(r<0) cout<<-1;
    else if(r>0) cout<<1;
    else cout<<0;
    //or we can lowercase the strings and then compare ;
}