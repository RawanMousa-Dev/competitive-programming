// Problem: [Harry_potter]
// Link: [codeforces.com/group/OL5YI9AjCF/contest/671866/problem/D]
// Result: Accepted


#include <iostream>
using namespace std;
 
int main() {
    int N;
    long long K;
    cin >> N >> K;
 
    bool can = false;
 
    for(int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        if(x > K) {
            can = true;
        }
    }
 
    if(can)
        cout << "Yes";
    else
        cout << "No";
 
    return 0;
}
