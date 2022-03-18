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
typedef long long ll;
using namespace std;


void solve() {
	int n; cin>>n;
	int c1,c2;
	c1=n/3; c2=n/3;
	if(n%3==1) c1++;
	if(n%3==2) c2++;
	cout<<c1<<" "<<c2<<endl;
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
