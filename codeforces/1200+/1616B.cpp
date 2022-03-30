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
    int n;cin>>n;
    string s; cin>>s;
    // vi a(n);
    // // set<int> si;
    // for(auto& it:a) cin>>it;
    // // sort(all(a));

    int k=0;
    for(int i=1;i<n;i++){
        if(s[0]!=s[1]){
            if(s[i]>s[i-1]) break;
            else k++;
        }
        else{
            if(s[i]>=s[i-1]) break;
            else k++;
        }
            
    }
    string ans="";
    for(int i=0;i<=k;i++) ans+=s[i];
    for(int i=k;i>=0;i--) ans+=s[i];
    cout<<ans<<endl;
        
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

