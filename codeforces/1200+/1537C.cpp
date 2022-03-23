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
    int n;cin>>n;
    // string s; cin>>s;
    vector<int> a(n);
    for(auto& it:a) cin>>it;
    sort(all(a));
    if(n==2){
        cout<<a[0]<<" "<<a[1]<<"\n";
        return;
    }
    int minDiff=a[1]-a[0], ind1=0,ind2=1;
    for(int i=0;i<n-1;i++) if(a[i+1]-a[i]<minDiff) minDiff=a[i+1]-a[i],ind1=i,ind2=i+1;
    for(int i=ind2;i<n;i++) cout<<a[i]<<" ";
    for(int i=0;i<=ind1;i++) cout<<a[i]<<" ";
    cout<<"\n";
}

int32_t main() {
    SPEED;

    int T=1;
    cin>>T;
    while (T--) solve();
    return 0;
}

