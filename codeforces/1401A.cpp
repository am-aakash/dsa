#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef unsigned long long ll;
using namespace std;


void solve() {
    ll n,k; cin>>n>>k;
    if(n<=k){
    	cout<<k-n<<endl;
    	return;
    }
    if(n%2==0){
    	if(k==0 || k%2==0) cout<<"0\n";
    	else cout<<"1\n";
    }
    else{
    	if(k==0 || k%2==0) cout<<"1\n";
    	else cout<<"0\n";
    }
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

//https://codeforces.com/problemset/problem/1401/A
