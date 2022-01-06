#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,n) for (int i = 0; i < n; i++)
typedef long long ll;
#define endl '\n'
using namespace std;

void solve() {
	ll n,m,k,ans=0; cin>>n>>m>>k;
	ll a[n];
	REP(i,n) cin>>a[i];
	sort(a,a+n);
	if(k<m)	ans+= (m/(k+1))*(k*a[n-1] + a[n-2]) + (m%(k+1))*(a[n-1]);
	else if(k==m) ans+= k*a[n-1];
	else ans+= m*a[n-1];
	cout<<ans;
}

int main() {
    SPEED;
    solve();
	return 0;
}
