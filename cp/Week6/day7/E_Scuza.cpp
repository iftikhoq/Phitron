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
   ll n,q;
   cin >> n >> q;
   vi v(n);
   vi pre;
   pre.pb(0);
   vi mx;
   f1(n){
      cin >> v[i];
      if(i!=0){
          pre.pb(pre.back()+v[i]);
          mx.pb(max(mx.back(),v[i]));
      }
      else{
          pre.pb(v[i]);
          mx.pb(v[i]);
      }
   }
   f1(q){
      ll t;
      cin >> t;
      ll in = upper_bound(mx.begin(),mx.end(), t)-mx.begin();
      cout << pre[in] << " ";
   }
   cout << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}