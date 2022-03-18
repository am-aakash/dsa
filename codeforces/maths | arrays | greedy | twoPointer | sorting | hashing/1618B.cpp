#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back
#define vi vector<int>
#define endl '\n'
typedef unsigned long long ll;
using namespace std;


void solve() {
	int n; cin>>n;
	vector<string> ip;
	string temp, ans;
	for(int i=0;i<n-2;i++){
		cin>>temp;
		ip.pb(temp);
	}
	int cnt=0;
	ans+=ip[0];
	for(int i=1;i<n-2;i++){
		if(ip[i-1][1]==ip[i][0]){
			ans+=ip[i][1];
		}
		else if(cnt==0){
			ans+=ip[i];
			cnt++;
		}
	}
	if(cnt==0) ans+='a';
	cout<<ans<<endl;
}

int main() {"output.txt", "w", stdout);
    #endif
    SPEED;
    // solve();
    int T;
    cin >> T; 
    while (T--) {
        solve();
    }
	  return 0;
}

// https://codeforces.com/contest/1618/problem/B
