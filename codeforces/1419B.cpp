#include <bits/stdc++.h>
#include <math.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define INF 1000000000
#define end '\n'
typedef long long ll;
using namespace std;

int main() 
{ 
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output2.txt", "w", stdout);
     #endif
     SPEED;
     //solve();
     ll arr[31];
     arr[0]=0;
     for(int i=1;i<=30;i++){
          arr[i] = arr[i-1]*2 + pow(pow(2,i-1),2);
     }
     for(int i=1;i<=30;i++){
          arr[i]+=arr[i-1];
     }
     int T;
     cin >> T; 
     while (T--) {
          ll n; cin>>n;
          int ans;
          for(int i=0;i<=30;i++){
               if(n>=arr[i]) ans=i;
          }
          cout<<ans<<"\n";
     }
     return 0; 
} 

