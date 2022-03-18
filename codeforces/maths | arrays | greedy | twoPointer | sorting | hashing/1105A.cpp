#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,n) for (int i = 0; i < n; i++)
typedef long long ll;
#define endl '\n'
using namespace std;

void solve() {
	int n; cin>>n;
	int a[n];
	REP(i,n) cin>>a[i];
	int t,ans=INT_MAX;
	for(int j=100;j>=1;j--){
		int temp=0;
		REP(i,n) temp += max(0,abs(a[i]-j)-1);
		if(temp<ans) ans=temp, t=j;
	}
	cout<<t<<" "<<ans;
}

int main() {
    SPEED;
    solve();
    return 0;
}
