#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

void solve() {
     int n,k1,k2,w,b;
     cin>>n>>k1>>k2>>w>>b;
     int whites=min(k1,k2),blacks=n-max(k1,k2);
     int common=abs(k1-k2)/2;
     whites+=common, blacks+=common;
     if(w<=whites && b<=blacks) cout<<"YES\n";
     else cout<<"NO\n";

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
