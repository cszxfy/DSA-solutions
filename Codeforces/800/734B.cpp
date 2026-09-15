#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    long long x = min(k2, min(k5, k6));
    k2 -= x;
    k5 -= x;
    k6 -= x;
    long long y = min(k2, k3);
    long long ans = x * 256 + y * 32;
    cout << ans << endl;

    return 0;
}