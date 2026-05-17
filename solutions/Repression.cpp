// Problem: [Repression]
// Link: [codeforces.com/group/OL5YI9AjCF/contest/656015/problem/N]
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
    long long a,b,c,k,l,m;
    cin>>a>>b>>c;
    k = a+b;
    l = b+c;
    m = a+c;
    cout<<max(k,max(l,m));
 
    return 0;
}
