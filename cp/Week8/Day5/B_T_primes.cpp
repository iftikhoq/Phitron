#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool ifprime(ll n){
    if(n==1){
    return false;
    }

    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void solve(){
        ll n;
    cin >> n;

    ll t=sqrt(n);

    if(pow(t,2)==n){
        if(ifprime(t)){
        cout << "YES\n";
        }
        else cout << "NO\n";
    }
    else cout << "NO\n";
}   
int main() {
        ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int test;
    cin >> test;
    while (test--) 
    solve();
    
    
}