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
   ll n;
   cin >> n;
   vi v(n);

   f1(n) cin >> v[i];
    ll ans=LLONG_MAX;
   f2(1,n-1){
      ll t = max(abs(v[i]-v[i-1]),abs(v[i]-v[i+1]));
        ans = min(t,ans);
   } 
   ans = min(abs(v[0]-v[1]),ans);
   ans = min(abs(v[n-2]-v[n-1]),ans);
   cout << ans << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}