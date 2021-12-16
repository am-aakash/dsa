#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long ll;
using namespace std;


void solve() {
	ll n,v; cin>>n>>v;
	int ans=0;
	if(n-1<=v) ans+=n-1;
	else {
		ans+=v;
		for(int i=2;i<=n-v;i++){
			ans+=i;
		}
	}
	cout<<ans<<endl;
	
}

int main() {
    SPEED;
    solve();
	return 0;
}
