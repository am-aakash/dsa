#include <bits/stdc++.h>
#define INF 1000000000
#define endl '\n'
typedef long long ll;
using namespace std;

void solve() {
    int n,l,r,k;
    multiset<int> price;
    int ans=0,sum=0;
    cin>>n>>l>>r>>k;
    for(int i=0;i<n;i++){
    	int ip;
    	cin>>ip;
    	price.insert(ip);
    }
    for(auto it:price){
    	if(it>=l && it<=r && sum+it<=k){
    		sum+=it;
    		ans++;
    	}
    }
    cout<<ans<<endl;
}

int main() {
    int T;
    cin >> T; 
    while (T--) {
        solve();
    }
	 return 0;
}
