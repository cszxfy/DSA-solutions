#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
  getline(cin, s);//not cin because it will only read till first space 
    set<int>st;
    for(char c:s){
        if (c >= 'a' && c <= 'z')
            st.insert(c);
    }
    cout<<st.size();
    return 0;
}