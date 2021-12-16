#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long ll;
using namespace std;


void solve() {
	ll b,k; cin>>b>>k;
	ll a[k];
	ll ans;
	b%=2;
	for(int i=1;i<=k;i++){
		cin>>a[i];
		a[i]%=2;
		ans=(b*ans)+a[i];
	} 
	(ans&1)? cout<<"odd" : cout<<"even";
}

int main() {
    SPEED;
    solve();
	return 0;
}
