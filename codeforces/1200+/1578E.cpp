/* I can do this all day */
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define int long long
using namespace std;

void solve() {
    int h,p,ans=0,temp=0; cin>>h>>p;
    for(int i=0;i<h;i++){
        temp += pow(2,i);
        ans += (temp<p)? 1 : temp/p;
        if(temp>p) temp=temp%p;
        else temp=0;
    }
    if(temp>0) ans++;
    cout<<ans<<"\n";
}

int32_t main() {
    SPEED;

    int T=1;
    cin>>T;
    while (T--) solve();
    return 0;
}

