// Problem: [Train]
// Link: [codeforces.com/group/OL5YI9AjCF/contest/656015/problem/O]
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
    int i,j,n;
    cin >>i>>j;
    n = (i-j)+1;
    cout << n;
 
    return 0;
}
