// Problem: [Soso and Strings]
// Link: [codeforces.com/group/OL5YI9AjCF/contest/671866/problem/F]
// Result: Accepted


#include <iostream>
using namespace std;
 
int main() {
    string x, y;
    cin >> x >> y;
 
    for(int i = 0; i < x.length(); i++) {
        char n = tolower(x[i]);
        char m = tolower(y[i]);
 
        if(n < m) {
            cout << -1;
            return 0;
        }
        else if(n > m) {
            cout << 1;
            return 0;
        }
    }
 
    cout << 0;
    return 0;
}
