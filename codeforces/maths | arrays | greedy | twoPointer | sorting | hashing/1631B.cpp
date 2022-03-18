#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,n) for (int i = 0; i < n; i++)
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
typedef unsigned long long ll;
#define vi vector<ll>
#define vii vector<ii>
#define vvi vector<vi>
#define INF 1000000000
#define endl '\n'
using namespace std;

void solve() {
	int n; cin>>n;
	int a[n];
	REP(i,n) cin>>a[i];
	int i=n-1, mul=1, ans=0;
	while(i>0){
		if(a[i]==a[i-1] && i>=1) i--,mul++;
		else{
			int temp=a[i];
			i=i-mul;
			if(i>0) a[i]=temp;
			mul=mul*2,ans++;
		}
	}
	cout<<ans<<"\n";
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
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
