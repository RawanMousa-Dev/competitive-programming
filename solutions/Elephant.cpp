// Problem: [Elephant]
// Link: [codeforces.com/group/OL5YI9AjCF/contest/656015/problem/I]
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
    long double n;
    cin >> n;
    cout << ceill(n/5);
    return 0;
}
