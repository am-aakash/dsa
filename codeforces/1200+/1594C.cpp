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
    int n; cin>>n;
    string c; cin>>c;
    string s; cin>>s;
    vector<int> diff;
    for(int i=0;i<n;i++) if(s[i]!=c[0]) diff.pb(i+1);
    int size=diff.size();
    if(size==0){
        cout<<"0\n";
        return;
    } 
    if(s[n-1]==c[0] && size>0){
        cout<<"1\n"<<n<<"\n";
        return;
    }
    for(int i=n;i>n/2;i--){
        // cout<<i<<" ";
        if(s[i-1]==c[0]){
            cout<<"1\n"<<i<<"\n";
            return;
        }
    }
    cout<<"2\n"<<n<<" "<<n-1<<"\n";
    
}

int32_t main() {
    SPEED;

    int T=1;
    cin>>T;
    while (T--) solve();
    return 0;
}

