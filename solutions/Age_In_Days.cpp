// Problem: [Age in Days]
// Link: [codeforces.com/group/OL5YI9AjCF/contest/656015/problem/Q]
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
    long long n,years ,months,days,remainder;
    cin >> n;
    years = n/ 365;
    remainder = n%365;
    months = remainder/30;
    days = remainder % 30;
 
 
    cout << years << " years"<<"\n";
    cout << months << " months"<<"\n";
    cout << days << " days"<<"\n";
    return 0;
}
