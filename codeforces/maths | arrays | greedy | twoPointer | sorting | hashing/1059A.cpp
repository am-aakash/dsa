    #include <bits/stdc++.h>
    #define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
    #define REP(i,n) for (int i = 0; i < n; i++)
    typedef unsigned long long ll;
    using namespace std;
     
    void solve() {
    	ll n,L,a, x,y; cin>>n>>L>>a;
    	int ans=0,prev=0;
    	REP(i,n){
    		cin>>x>>y;
    		if(x>=prev) ans+=(x-prev)/a;
    		if(x+y>prev) prev=x+y;
    	}
    	ans+=(L-prev)/a;
    	cout<<ans<<"\n";
    }
     
    int main() {
        SPEED;
        solve();
    	return 0;
    }
