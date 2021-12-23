#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
using namespace std;


void solve() {
	int L,v,l,r,ans=0; cin>>L>>v>>l>>r;
	ans= (l-1)/v + L/v - r/v;
	if(v==1) ans=l-1+L-r;
	cout<<ans<<endl;
}

int main() {
    SPEED;
    int T;
    cin >> T; 
    while (T--) {
        solve();
    }
	return 0;
}
