#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,n) for (int i = 0; i < n; i++)
typedef unsigned long long ll;
using namespace std;

void solve() {
     int n; cin>>n;
     string a[n],b[n];
     REP(i,n) cin>>a[i];
     REP(i,n) cin>>b[i];
     map<string,int> mpp;
     REP(i,n) mpp[a[i]]++, mpp[b[i]]--;
     int ans=0;
     for(auto it:mpp){
          if(it.second>0) ans+=it.second;
     }
     cout<<ans;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
    #endif
    SPEED;
    solve();
     return 0;
}