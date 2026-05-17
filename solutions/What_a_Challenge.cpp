// Problem: [What a Challenge!]
// Link: [codeforces.com/group/OL5YI9AjCF/contest/656015/problem/L]
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
    long double x1,y1,r;
    cin >> x1>>y1>>r;
    long double x2,y2;
    cin >>x2>>y2;
    long double d1,d2,R,D;
    d1 = x2-x1;
    d2 = y2-y1;
    R = r*r;
    D =d1*d1 + d2*d2;
    if (D <= R)
    {
       cout <<"YES";
    }
    else
    {
       cout <<"NO";
    }
    
    return 0;
}
