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
    vector <ll> v(n);
    for(auto &b : v) cin >> b;

    ll sum(0), l(0), r(0), count=0;
    f1(n){
        sum+=v[l];
        l++;
        while(sum>k){
            sum-=v[r];
            r++;
        }
        if(sum<=k){
            // cout << l sp << r << endl;
            ll sz = abs(r-l);
            count = max(count,sz);
        }
    }
    cout << count << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
            solve();
}