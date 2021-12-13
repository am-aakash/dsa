#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,n) for (int i = 0; i < n; i++)
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define INF 1000000000
#define endl '\n'
typedef long long ll;
using namespace std;


void solve() {
    ll n,a,b; cin>>n>>a>>b;
    char arr[2*a];
    ll A = a;
    ll j=0;
    while(a>0){
        for(ll i=97;i<97+b;i++){
            arr[j++] = (char)i;
        }
        a = a - b;
    }
    a = A;
    while(n>0){
        if(n-a>=0){
            for(ll i=0;i<a;i++){
                cout<<arr[i];
            }
        }else{
            ll val = n;
            for(ll i=0;i<val;i++){
                cout<<arr[i];
            }
            break;
        }
        n = n-a;
    }
    cout<<"\n";
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    SPEED;
    //solve();
    int T;
    cin >> T; 
    while (T--) {
        solve();
    }
	return 0;
}
