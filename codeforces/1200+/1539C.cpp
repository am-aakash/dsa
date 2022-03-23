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
#define INF 1000000000
using namespace std;

void solve() {
    int n,k,x;cin>>n>>k>>x;
    // string s; cin>>s;
    vector<int> a(n),diff;
    for(auto& it:a) cin>>it;
    sort(all(a));
    // for(auto it:a) cout<<it<<" "; cout<<"\n";
    for(int i=0;i<n-1;i++) if(a[i+1]-a[i]>x) diff.pb((a[i+1]-a[i]-1)/x);
    sort(all(diff));
    int ans = 1+diff.size();
    for(auto it:diff){
        if(k>=it) ans--,k-=it;
    }
    cout<<ans;
}

int32_t main() {
    SPEED;

    int T=1;
    // cin>>T;
    while (T--) solve();
    return 0;
}

