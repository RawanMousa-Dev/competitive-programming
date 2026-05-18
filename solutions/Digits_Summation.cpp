// Problem: [Digits Summation]
// Link: [codeforces.com/group/OL5YI9AjCF/contest/656015/problem/J]
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
    long long n1,n2;
    cin >> n1 >> n2;
    cout << (n1 % 10) + (n2 % 10);
    return 0;
} 
