/* I can do this all day */
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,n) for (int i = 0; i < n; i++)
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define all(v) v.begin(), v.end()
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
typedef unsigned long long ll;
#define vi vector<ll>
#define int long long
#define vii vector<ii>
#define vvi vector<vi>
#define INF 100
using namespace std;


void solve() {
    int n,k;cin>>n>>k;
    vector<int> a(n);
    set<int> si;
    for(auto& it:a) cin>>it,si.insert(it);
    sort(all(a));

    bool ans=false;
    for(int i=0;i<n;i++)
        if(si.count(a[i]+k)>0) ans=true;
    cout<<(ans?"YES\n":"NO\n");
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    SPEED;

    int T=1;
    cin>>T;
    while (T--) solve();
    return 0;
}

