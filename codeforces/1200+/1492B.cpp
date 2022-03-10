#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define INF 1000000000
#define endl '\n'
typedef unsigned long long ll;
using namespace std;

void solve()
{
    int n; cin>>n;
    vii a;
    vi ans,ip(n);
    for(int i=0;i<n;i++){
        cin>>ip[i];
        a.pb({ip[i],i});
    }
    sort(all(a));
    int i=n-1,j=n-1;
    while(i>=0){
        if(a[j].ss>i){
            j--; continue;
        }
        for(int k=a[j].ss; k<=i; k++){
            // cout<<ip[k]<<"\n";
            ans.pb(ip[k]);
        } 
        i=a[j].ss-1;
        j--;
    }
    for(auto it:ans) cout<<it<<" ";
    cout<<"\n";
}

int main()
{
    SPEED;
    // solve();
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
