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
#define vi vector<int>
#define int long long
#define vii vector<ii>
#define vvi vector<vi>
#define mpii map<int,int>
#define INF 100
using namespace std;


void solve() {
    // int n,k;cin>>n>>k;
    // vi a(n);
    // set<int> si;
    // for(auto& it:a) cin>>it,si.insert(it);
    // sort(all(a));

    int n,ans=0,i=0,j=0; string s; cin>>n>>s;
    while(j<n){
        if(s[i]=='(' && j<n-1) j+=2,i=j,ans++;
        else if(j>=n-1) break;
        else if(s[i]==')'){
            j++;
            if(j>=n) break;
            while(s[j]!=')'){
                j++;
                if(j>=n) break;
            }
            if(s[j]==')') j++,i=j,ans++;
        }
    }
    cout<<ans<<" "<<n-i<<"\n";
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

