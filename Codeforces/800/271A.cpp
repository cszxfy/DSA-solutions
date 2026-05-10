#include <bits/stdc++.h>
using namespace std;
int main() {
    int y;
    cin >> y;
 while (true) {
        y++;
        int temp = y;
        set<int> s;
        while (temp > 0) {
            s.insert(temp % 10);
            temp /= 10;
        }
        if (s.size() == 4) {
            cout << y;
            break;
        }
    }
    return 0;
}
/*using this or the formulla :
a=y/1k firt d
b=(y/100)%10 2nd d
c=(y/10)%10  third d 
d=y%10                 4th d
*/
