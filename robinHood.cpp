/*
author : Brobith
*/
//19031618206767

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define inf 1e9
#define INF 1e18
#define nl "\n"
#define fr(i, a, b) for (int i = a; i < b; i++)
#define sortVector(a) sort(a.begin(), a.end())
#define reverse(a) reverse(a.begin(), a.end())
#define mod 1000000007
#define lowerno(a, n) upper_bound(a.begin(), a.end(), n) - a.begin()
#define MOD 998244353
#define verylong __int128

// vector<vector<int>>a(2e5+2,vector<int>(6)); 
// bool compareSecond(const pair<int, int>& a, const pair<int, int>& b) {
//     return a.second > b.second; // Sort in descending order of the second element
// }
// bool compareSecondElement(const vector<int>& a, const vector<int>& b) {
//     return a[1] < b[1]; // Sort in ascending order based on the second element
// }
// __builtin_popcount
// vector<int>dp(2e5+3,0);

void solve()
{
    int n,k;
    cin >> n;
    cin >> k;

    int end_day = n;
    int start_day =  1 + (n - k);
    int days = k; 
    int days_matter = k % 4;

    switch(days_matter) {
        case 0:
            cout << "yes";
            break;
        case 1:
            cout << (((start_day & 1) == 0) ? "yes" : "no");
            break;
        case 2:
            cout << "no";
            break;
        case 3:
            cout << (((start_day & 1) == 0) ? "NO" : "YES");
            break;
    }

}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        solve();
        cout << "\n";
    }
}