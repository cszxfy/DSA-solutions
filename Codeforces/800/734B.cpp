#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    long long arr[4] = {k2, k3, k5, k6};
    long long x = min(arr[0], arr[1]);
    arr[0] -= x;
    arr[1] -= x;
    long long y = min(arr[0], min(arr[2], arr[3]));
    arr[0] -= y;
    arr[2] -= y;
    arr[3] -= y;
    long long ans = x * 32 + y * 256;
    cout << ans << endl;
    
    return 0;
}