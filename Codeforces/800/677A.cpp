#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
   int arr[n];
   int sum=0;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>h){
            arr[i]=2;
        }
        else{
            arr[i]=1;
        }
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}
//here we dont need the array becuase there is not need to store value just if the val >h then sum+=2 else 1;