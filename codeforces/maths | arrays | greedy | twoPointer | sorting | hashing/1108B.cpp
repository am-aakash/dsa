#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,n) for (int i = 0; i < n; i++)
#define mod 1000000007
#define pb push_back
#define ii pair<int,int>
typedef long long ll;
#define vi vector<ll>
#define INF 1000000000
#define endl '\n'
using namespace std;

void solve() {
	int n,temp; cin>>n;
	vi arr;
	REP(i,n){
		cin>>temp;
		arr.pb(temp);
	}
	sort(arr.begin(),arr.end());
	bool go=true;
	int i=n-2, ans2;
	while(go){
		if(arr[n-1]%arr[i] !=0 || arr[i]==arr[i+1]){
			ans2=i;
			go= false;
		}
		i--;
	}
	cout<<arr[n-1]<<" "<<arr[ans2];
	
}

int main() {
    SPEED;
    solve();
	  return 0;
}
