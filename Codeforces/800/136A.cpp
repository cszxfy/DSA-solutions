#include<bits/stdc++.h>
using namespace std;
int main (){
    int n ;
    cin >>n;
    int arr[n];
   for(int i =0;i<n;i++){
    cin>>arr[i];
   }    
    map<int ,int >mpp;
    for(int i =0;i<n;i++){
       mpp[arr[i]]=i+1;
    }
    for(int i = 1; i <= n; i++) {
      cout << mpp[i] << " ";
}
//second app (optimal):
vector<int> ans(n+1);
for(int i=1;i<=n;i++){
    int p ;
    cin >>p;
    ans[p]=i;
}
for(int i =1;i<=n;i++){
    cout<<ans[i]<<" ";
}
return 0;
}
