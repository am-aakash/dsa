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
	int n,h,a,b,k; cin>>n>>h>>a>>b>>k;
	int ta[k], fa[k], tb[k], fb[k];
	REP(i,k) cin>>ta[i]>>fa[i]>>tb[i]>>fb[i];

	//Logic
	REP(i,k){
		ll ans=0;
		ans += (ta[i]>=tb[i])? ta[i]-tb[i] : tb[i]-ta[i];
		ans += (fa[i]>=fb[i])? fa[i]-fb[i] : fb[i]-fa[i];
		if(ta[i]!=tb[i]){
			ans += (min(fa[i],fb[i])>b) ? min(fa[i],fb[i])-b : 0;
		  ans += (max(fa[i],fb[i])<a) ? a-max(fa[i],fb[i]) : 0;
			ans += (min(fa[i],fb[i])>b) ? min(fa[i],fb[i])-b : 0;
			ans += (max(fa[i],fb[i])<a) ? a-max(fa[i],fb[i]) : 0;
		}
		cout<<ans<<endl;
	}
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    SPEED;
    solve();
	return 0;
}

// https://codeforces.com/problemset/problem/1020/A
