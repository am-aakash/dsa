#include <bits/stdc++.h>
#define end '\n'
typedef long long ll;
using namespace std;


void dfs(int node, int hole[], int adj[]){
     hole[node]++;
     if(hole[node]==2) return;
     dfs(adj[node], hole,adj);

}

void solve() {
     int n; cin>>n;
     int adj[n];
     for(int i=1;i<=n;i++){
          cin>>adj[i];
     }

     int hole[n+1]={0};
     for(int i=1;i<=n;i++){
          dfs(i,hole,adj);
          
          for(int i=1;i<=n;i++){

               if(hole[i]==2) cout<<i<<" ";
               hole[i]=0;
          }
     }
     
}

int main() 
{ 
     solve();
     return 0; 
} 

