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
	int a[n], b[n];
	int max1=INT_MIN, max2=INT_MIN;
	REP(i,n) cin>>a[i];
	REP(i,n) cin>>b[i];
	REP(i,n){
		if(a[i]>max1) max1=a[i];
		if(b[i]>max2) max2=b[i];
	}
	REP(i,n){
		if(max1>max2){
			if(a[i]<b[i]) swap(a[i],b[i]);
		}
		else{
			if(b[i]<a[i]) swap(a[i],b[i]);
		}
	}
	max1=INT_MIN, max2=INT_MIN;
	REP(i,n){
		if(a[i]>max1) max1=a[i];
		if(b[i]>max2) max2=b[i];
	}
	cout<<max1*max2<<"\n";
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
