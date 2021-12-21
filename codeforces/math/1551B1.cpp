#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long ll;
using namespace std;

void solve() {
	string s; cin>>s;
	int n=s.length();
	map<char,int> mp;
	for(auto it:s){
		mp[it]++;
		if(mp[it]>2) n--;
	}
	cout<<n/2<<endl;
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
