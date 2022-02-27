#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,n) for (int i = 0; i < n; i++)
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define INF 1000000000
#define endl '\n'
typedef unsigned long long ll;
using namespace std;

void solve() {
     int n; cin>>n;
     int a[n];
     REP(i,n) cin>>a[i];
     int ans=a[0];
     for(int i=1; i<n ;i++) ans&=a[i];
     cout<<ans<<"\n";
     
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
    #endif
    SPEED;
    //solve();
    int T;
    cin >> T; 
    while (T--) {
        solve();
    }
	return 0;
}
