#include <bits/stdc++.h>
#define ll              long long
#define yes             cout << "YES\n";
#define no              cout << "NO\n";
#define f1(n)           for(int i=0;i<n;i++)
#define f2(a,n)         for(int i=a;i<n;i++)
#define vi              vector <long long>
#define pb              push_back
#define sp              << " "
#define endl            "\n"
#define MOD             1000000007

using namespace std;
void solve(){
    ll n,k;
    cin >> n >> k;

    vi v1;
    vi v2;

    for(ll i=1;i<=sqrt(n);i++){
        if(n%i==0){
            v1.pb(i);
            v2.pb(n/i);
        }
    }
    if(v2.back()!=v1.back()) v1.pb(v2.back());
    v2.pop_back();
    while(v2.size()>0){
        v1.pb(v2.back());
        v2.pop_back();
    }

    if(k<=v1.size()) cout << v1[k-1];
    else cout << "-1\n";
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
            solve();
}