#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,n) for (int i = 0; i < n; i++)
#define endl '\n'
using namespace std;

void solve() {
	int n, prev = INT_MAX; cin>>n;
	int w[n],h[n];
	REP(i,n){
		cin>>w[i]>>h[i];
		if(min(w[i],h[i]) > prev){
			cout<<"NO";
			return;
		}
		else if(min(w[i],h[i]) <= prev){
			if(max(w[i],h[i]) <= prev){
				prev=max(w[i],h[i]);
			}
			else prev=min(w[i],h[i]);
		}
		// cout<<prev<<" ";
	}
	cout<<"YES";
}

int main() {
    SPEED;
    solve();
	  return 0;
}
