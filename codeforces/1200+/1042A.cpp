#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i, n) for (int i = 0; i < n; i++)
#define fr(i, a, b) for (ll i = a; i < b; i++)
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
    int n, m;
    cin >> n >> m;
    vi a(n);
    for (auto &it : a)
        cin >> it;
    sort(a.begin(), a.end());
    int max = a[n - 1] + m, calc = 0;
    for (int i = 0; i < n; i++)
    {
        calc += a[n - 1] - a[i];
    }
    int min = a[n - 1] + ((m - calc > 0) ? (m - calc) / n + (((m - calc) % n > 0) ? 1 : 0) : 0);
    cout << min << " " << max;
}

int main()
{
    SPEED;
    solve();
    return 0;
}