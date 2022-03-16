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
#define endl '\n'
using namespace std;
int T;

void solve() {
    int n,m; cin>>n>>m;
    if(m%n!=0){
        cout<<-1; return;
    }
    int d=m/n, ans=0;
    while(d>1){
        if(d%3==0) d/=3,ans++;
        else break;
    }
    while(d>1){
        if(d%2==0) d/=2,ans++;
        else break;
    }
    if(d==1) cout<<ans;
    else cout<<-1;
}

int32_t main() {
    SPEED;

    solve();
    // while (cin>>T, T--) solve();
    
    return 0;
}
