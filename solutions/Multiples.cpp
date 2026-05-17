// Problem: [Multiples]
// Link: [codeforces.com/group/OL5YI9AjCF/contest/656213/problem/B]
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
    long long A,B;
    cin >> A >> B;
    if (A % B == 0 || B % A == 0){
        cout << "Multiples";
    }
 
    else
    {
        cout << "No Multiples";
    }
    
    return 0;
}
