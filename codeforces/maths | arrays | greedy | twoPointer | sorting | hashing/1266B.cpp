#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define INF 1000000000
#define endl '\n'
typedef unsigned long long ll;
using namespace std;

vi prefxSum(vi arr)
{
    int temp = arr[0];
    for (int i = 1; i < arr.size(); i++)
        arr[i] += arr[i - 1];
    return arr;
}

void solve()
{
    ll a; cin >> a;
    cout<<(a%14<=6 && a>14 && a%14>0? "YES\n":"NO\n");
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
#endif
    SPEED;
    // solve();
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}