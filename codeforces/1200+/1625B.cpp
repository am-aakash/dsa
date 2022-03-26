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
    int n,ans=0;cin>>n;
    vector<int> a(n);
    // for(auto& it:a) cin>>it;
    // sort(all(a));
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++) cin>>a[i], v.pb({a[i],i});
    sort(all(v));
    int minDist=150001, ind1,ind2;
    for(int i=0;i<n-1;i++){
        if(v[i].ff==v[i+1].ff){
            if(abs(v[i].ss-v[i+1].ss)<minDist) minDist=abs(v[i].ss-v[i+1].ss),ind1=v[i].ss,ind2=v[i+1].ss;
        }
    }
    if(minDist==150001){
        cout<<"-1\n";
        return;
    }
    // cout<<ind1<<" "<<ind2<<"\n";
    cout<<n-ind2+ind1<<"\n";
}

int32_t main() {
    SPEED;

    int T=1;
    cin>>T;
    while (T--) solve();
    return 0;
}

