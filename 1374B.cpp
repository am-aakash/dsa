#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef unsigned long long ll;
using namespace std;


void solve() {
    ll n; cin>>n;
    if(n==1){
    	cout<<"0\n";
    	return;
    }
    if(n%3){
    	cout<<"-1\n";
    	return;
    }
    ll c2=0, c3=0;
    while(n%3==0){
    	n/=3; c3++;
    }
    while(n%2==0){
    	n/=2; c2++;
    }
    if(n>1 || c2>c3){
    	cout<<"-1\n";
    	return;
    }
    cout<<c3+(c3-c2)<<endl;
}

int main() {
    SPEED;
    int T;
    cin >> T; 
    while (T--) {
        solve();
    }
	  return 0;
}

//https://codeforces.com/problemset/problem/1374/B
