#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int first = 0, last = 0;
        for (int i = 0; i < 3; i++) {
            first += s[i];
        }
        for (int i = 3; i < 6; i++) {
            last += s[i] ;
        }

        if (first == last)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
    return 0;
}