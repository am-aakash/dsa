#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back
#define vi vector<int>
#define endl '\n'
typedef unsigned long long ll;
using namespace std;


void solve() {
	int temp;
	vi ip;
    for(int i=0;i<7;i++){
    	cin>>temp;
    	ip.pb(temp);
    }
    ll sum=ip[0]+ip[1];
    for(int i=2;i<6;i++){
    	if(ip[i]+sum == ip[6]){
    		temp = ip[i];
    	}
    }
    cout<<ip[0]<<" "<<ip[1]<<" "<<temp<<endl;
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
