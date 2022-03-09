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

void solve()
{
    int n;
    cin >> n;
    vi a(n), odd, even, odd2, even2;
    for (auto &it : a)
        cin >> it, (it % 2 ? odd.pb(it) : even.pb(it));
    odd2 = odd;
    even2 = even;
    sort(all(odd));
    sort(all(even));
    cout << (odd == odd2 && even == even2 ? "Yes\n" : "No\n");
}

int main()
{
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