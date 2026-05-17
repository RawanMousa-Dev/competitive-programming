// Problem: [Buy a Shovel]
// Link: [codeforces.com/group/OL5YI9AjCF/contest/671866/problem/B]
// Result: Accepted

#include <iostream>
using namespace std;
 
int main() {
    int k, r;
    cin >> k >> r;
 
    int n = 1;
    while (true) {
        int total = n * k;
        if (total % 10 == 0 || total % 10 == r) {
            cout << n;
            break;
        }
        n++;
    }
 
    return 0;
}
