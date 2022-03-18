#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,n) for (int i = 0; i < n; i++)
typedef unsigned long long ll;
#define endl '\n'
using namespace std;

void solve() {
	int l,r,d; cin>>l>>r>>d;
	if(l>d || r<d){
		cout<<d<<"\n";
		return;
	}
	int ans = ((r+1)%d>0)? ((r+1)/d +1)*d : r+1;
	cout<<ans<<"\n";
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
