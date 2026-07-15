#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int cntTwo = 0;
        bool ok = false;
        for (int i = 0; i < k; i++) {
            long long x;
            cin >> x;
            if (x >= 3)
                ok = true;
            if (x >= 2)
                cntTwo++;
        }
        if (ok || cntTwo >= 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}