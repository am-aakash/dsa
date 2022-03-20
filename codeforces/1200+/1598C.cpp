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

void solve() {
        int n;cin>>n;
        long long s=0;
        vector<long long> v(n);
        for(auto& i:v){
            cin>>i;s+=i;i*=n;
        }
        map<long long,int> cnt;
        long long ans=0;
        for(auto& i:v){
            ans+=cnt[s-i];
            cnt[i-s]++;
        }
        cout<<ans<<'\n';
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

