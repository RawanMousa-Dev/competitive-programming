// Problem: [Max and Min]
// Link: [codeforces.com/group/OL5YI9AjCF/contest/656015/problem/M]
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
    long long a,b,c;
    cin >> a>>b>>c;
    cout << min(a,(min(b,c)))<<" "<<  max( a,( max( b, c)));
    return 0;
}
