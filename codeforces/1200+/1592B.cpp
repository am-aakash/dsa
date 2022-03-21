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
    int n,k;cin>>n>>k;
    int flag=1;
    int a[n],b[n];
    for(int i=1;i<=n;i++) cin>>a[i], b[i]=a[i];
    sort(b+1,b+n+1);
    for(int i=n-k+1;i<=k;i++){
        if(a[i]==b[i])continue;
        flag=0;
    }
    cout<<(flag?"YES\n":"NO\n");
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
    #endif
    SPEED;

    int T=1;
    cin>>T;
    while (T--) solve();
    return 0;
}

