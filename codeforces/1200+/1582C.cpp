/* I can do this all day */
#pragma GCC optimize("Ofast")
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
using namespace std;

void solve() {
    int n;cin>>n;
    string s; cin>>s;
    int i=0,j=n-1,op1=0,op2=0;
    vector<char> v1,v2;
    while(i<=j){
        if(s[i]!=s[j]){
            v1.pb(s[i]);
            op1=(s[i]==v1[0]||s[j]==v1[0])? op1+1:INT_MAX;
            if(s[i]==v1[0]) i++;
            else if(s[j]==v1[0]) j--;
            else i++;
        }
        else i++,j--;
    }
    i=0,j=n-1;
    while(i<j){
        if(s[i]!=s[j]){
            v2.pb(s[j]);
            op2=(s[i]==v2[0]||s[j]==v2[0])? op2+1:INT_MAX;
            if(s[i]==v2[0]) i++;
            else if(s[j]==v2[0]) j--;
            else j--;
        }
        else i++,j--;
    }
    int ans=min(op1,op2);
    cout<<(ans>=1000000? -1:ans)<<"\n";
}

int32_t main() {
    SPEED;

    int T=1;
    cin>>T;
    while (T--) solve();
    return 0;
}

