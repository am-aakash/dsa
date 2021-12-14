#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef unsigned long long ll;
using namespace std;


void solve() {
    ll n; cin>>n;
    for(int i=0;i<=n/3;i++){
    	for(int j=0;j<=n/5;j++){
    		for(int k=0;k<=n/7;k++){
    			if((3*i + 5*j + 7*k)==n){
    				cout<<i<<" "<<j<<" "<<k<<"\n";
    				return;
    			}
    		}
    	}
    }
    cout<<"-1\n";
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

// https://codeforces.com/problemset/problem/1430/A
