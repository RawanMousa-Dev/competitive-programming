// Problem: [Leftmost Digit]
// Link: [codeforces.com/group/OL5YI9AjCF/contest/656015/problem/P]
// Result: Accepted

#include <bits/stdc++.h>
using namespace std;
 
void io_st()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
 
int main()
{
    io_st();
    long long n,N;
    cin >>n;
    while (n>=10)
    {
        n/=10;
    }
    
    cout << n;
    return 0;
}
