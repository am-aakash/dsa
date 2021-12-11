#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long ll;
using namespace std;

void solve() {
    ll n; cin>>n;
    cout<<(!(n&(n-1))?("NO\n"):("YES\n"));
}

int main() {
    int T;
    cin >> T; 
    while (T--) {
        solve();
    }
	return 0;
}

//https://codeforces.com/contest/1475/problem/A
