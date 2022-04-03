/* I can do this all day */
// @am_aakash 
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define int long long
#define REP(i,n)        for (int i = 0; i < n; i++)
#define all(v)          v.begin(), v.end()
    //    //    //  //  STL
#define ii              pair<int,int>
#define vi              vector<int>
#define vii             vector<ii>
#define vvi             vector<vi>
#define mpii            map<int,int>
#define min_heap        priority_queue<int,vector<int>,greater<int>>
    //    //    //   // STL ALGORITHMS
#define CNT(arr,n)      count(all(arr),n)
#define CNT_IF(arr,iff) count_if(all(arr),iff)
#define LB(arr,n)       lower_bound(all(arr),n)-arr.begin()
#define UB(arr,n)       upper_bound(all(arr),n)-arr.begin()
#define Min(arr)        min_element(all(arr))
#define Max(arr)        max_element(all(arr))

#define pb              push_back
#define ff              first
#define ss              second

typedef unsigned long long ll;
#define INF 1000000
#define M109 1000000007
using namespace std;


void solve() {
    int n;cin>>n;
    // string s; cin>>s;
    // vi a(n);
    // for(auto& it:a) cin>>it;
    // sort(all(a),greater<int>());

    int temp;
    mpii mp;
    REP(i,n) cin>>temp,mp[temp]++;

    int ans=mp.size(), it=0;
    for(int i=1;i<=n;i++){
        cout<<max(i,ans)<<" ";
    }   

    cout<<"\n";
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input2.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    SPEED;

    int T=1;
    cin>>T;
    while (T--) solve();
    return 0;
}
