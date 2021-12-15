#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define endl '\n'
typedef unsigned long long ll;
using namespace std;


void solve() {
	int n,m, sum=0, ans=0; cin>>n>>m;
	int a[n];
	vi op;
	REP(i,n){
		cin>>a[i];
		sum+=a[i];
		ans=sum/m;
		op.pb(ans);
		sum = sum - ans*m;
	} 
	for(auto it:op) cout<<it<<" ";
	cout<<endl;
}

int main() {
    SPEED;
    solve();
	return 0;
}
