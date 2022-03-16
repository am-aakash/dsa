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
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int loan=0,extra=0,cnt=0;
    if (*max_element(a.begin() + 1, a.end() - 1) == 1 || (n == 3 && a[1] % 2 == 1)) {
        cout << "-1\n";
        return;
    }
    for(int i=1;i<n-1;i++){
        if(a[i]%2==0){
            extra+=(a[i]/2),cnt+=(a[i]/2);
            if(loan>extra) loan-=extra,extra=0;
            else extra-=loan,loan=0;
        }
        else{
            if(a[i]==1){
                if(extra>0) cnt++;
                else loan++,cnt++;
                loan-=extra;
            }
            else{
                if(extra>0) cnt++;
                else loan++,cnt++;
                loan-=extra;
                extra+=a[i]/2,cnt+=a[i]/2;
            }
        }
    }
    cout<<cnt<<"\n";
}

int32_t main() {
    cin>>T;
    while (T--) solve();
    return 0;
}

