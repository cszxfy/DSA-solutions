#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<char> nums;
    for (char c : s) {
        if (c != '+') nums.push_back(c);
    }
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i != nums.size() - 1) cout << "+";
    }
}