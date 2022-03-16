#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,n) for (int i = 0; i < n; i++)
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define all(v) v.begin(), v.end()
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
typedef unsigned long long ll;
#define vi vector<ll>
#define int long long
#define vii vector<ii>
#define vvi vector<vi>
#define INF 1000000000
#define endl '\n'
using namespace std;
int T;

void solve() {
    int n,m,ip1,ip2,sum=0;  cin>>n>>m;
    map<int,int> mpp;
    vii vpW;
    vector<int> arr;
    for(int i=0;i<m;i++){
        cin>>ip1>>ip2;
        mpp[ip1]=i;
        vpW.pb({ip2,ip1});
    }
    sort(all(vpW));
    for(int i=0;i<2*n;i++){
        sum+=vpW[i].ff;
        arr.pb(vpW[i].ss);
    }
    cout<<sum<<"\n";
    sort(all(arr));
    int i=0,j=2*n-1;
    while(i<j){
        cout<<mpp[arr[i]]+1<<" "<<mpp[arr[j]]+1<<"\n";
        i++,j--;
    }
    cout<<"\n";
}

int32_t main() {
    cin>>T;
    while (T--) solve();
    return 0;
}
