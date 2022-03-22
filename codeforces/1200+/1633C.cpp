/* I can do this all day */
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define int long long
using namespace std;

void solve() {
    int hc,dc,hm,dm,k,w,a;
    cin>>hc>>dc>>hm>>dm>>k>>w>>a;
    for(int i=0;i<=k;i++){
        int nhc=hc+a*i,ndc=dc+w*(k-i);
        int c=(nhc%dm==0)? nhc/dm:nhc/dm+1;
        int m=(hm%ndc==0)? hm/ndc:hm/ndc+1;
        if(c>=m){
            cout<<"YES\n";
            return;
        }

    }
    cout<<"NO\n";
}

int32_t main() {
    SPEED;

    int T=1;
    cin>>T;
    while (T--) solve();
    return 0;
}

