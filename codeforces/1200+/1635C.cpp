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
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    if(a[n-2]>a[n-1]){
        cout<<"-1\n";
        return;
    }
    if(a[n-1]<0){
        for(int i=0;i<n-1;i++) 
            if(a[i]>a[i+1]){
                cout<<"-1\n";
                return;
            }
        cout<<"0\n";
    }
    else{
        cout<<n-2<<"\n";
        for(int i=0;i<n-2;i++){
            cout<<i+1<<" "<<n-1<<" "<<n<<"\n";
        }
    }
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
    #endif
    SPEED;

    // solve();
    cin>>T;
    while (T--) solve();
    
    return 0;
}

