//problem A:
#include<bits/stdc++.h>
using namespace std;
int main(){
 int t ;
 cin >>t;
 while(t--){
	int x,y;
	cin>>x>>y;
	if(x%2==0 && y%2==0){
	   cout<<"YES"<<endl;
	}
	else if((x%1==0 && y%2==0) || (y%1==0 && x%2==0)  ){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;;
	}
 }
return 0;
}
//problem b:
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int x;
        string s;
        cin >> x >> s;
 
        int c = 0;
 
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ')'){
                c++;
            }
        }
 
        if(x - c == c){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
 
    return 0;
}
//problem c
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> d6, d2, d3, other;
        for(int i = 0; i < n; i++){
            cin >> a[i];
 
            if(a[i] % 6 == 0){
                d6.push_back(a[i]);
            }
            else if(a[i] % 2 == 0){
                d2.push_back(a[i]);
            }
            else if(a[i] % 3 == 0){
                d3.push_back(a[i]);
            }
            else{
                other.push_back(a[i]);
            }
        }
        for(auto x : d6) cout << x << " ";
        for(auto x : d2) cout << x << " ";
        for(auto x : other) cout << x << " ";
        for(auto x : d3) cout << x << " ";
        cout << "\n";
    }
 
    return 0;
}