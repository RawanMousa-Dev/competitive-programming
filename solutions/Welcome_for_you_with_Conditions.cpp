// Problem: [Welcome for you with Conditions]
// Link: [codeforces.com/group/OL5YI9AjCF/contest/656213/problem/A]
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
    long long n,m;
    cin >> n >> m;
    if (n >= m){
        cout << "Yes";
    }
 
    else
    {
        cout << "No";
    }
    
    return 0;
}
