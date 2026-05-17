// Problem: [Beautiful Year]
// Link: [codeforces.com/group/OL5YI9AjCF/contest/671866/problem/A]
// Result: Accepted

#include <iostream>
#include <set>
using namespace std;
 
int main() {
    int y;
    cin >> y;
    
    while (true) {
        y++;
        string s = to_string(y);
        set<char> digits(s.begin(), s.end());
        
        if (digits.size() == 4) {
            cout << y;
            break;
        }
    }
    
    return 0;
}
