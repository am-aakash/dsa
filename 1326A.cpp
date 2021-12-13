#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,n) for (int i = 0; i < n; i++)
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define INF 1000000000
#define endl '\n'
typedef unsigned long long ll;
using namespace std;


void solve() {
    ll n; cin>>n;
    if(n==1){
    	cout<<"-1\n";
    	return;
    }
    if(n==2){
    	cout<<"57\n";
    	return;
    }
    if(n==3){
    	cout<<"239\n";
    	return;
    }
    string ans;
    ans.pb('2');
    for(int i=1;i<n;i++){
    	ans.pb('3');
    }
    // if((n-1)%3==0) ans.pb('7');
    // else ans.pb('3');
    cout<<ans<<endl;
}

int main() {
    SPEED;
    //solve();
    int T;
    cin >> T; 
    while (T--) {
        solve();
    }
	return 0;
}
