#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maxPos = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxPos]) {
            maxPos = i;
        }
    }
    int minPos = n - 1;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[minPos]) {
            minPos = i;
        }
    }
    int ans = maxPos + (n - 1 - minPos);
    if (maxPos > minPos)
        ans--;

    cout << ans;

    return 0;
}