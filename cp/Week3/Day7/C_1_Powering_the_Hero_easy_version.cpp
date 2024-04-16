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
    int n;
    cin >> n;
    map <ll,int, greater<ll>> mp;
    ll ans=0;
    f1(n){
        ll t;
        cin >> t;
        if(t!=0){
            mp[t]++;
        }
        else{
            if(mp.empty()) continue;
            if(mp.begin()->second==0) mp.erase(mp.begin());
            auto m = mp.begin();
            ll x =m->first;
            ans+=x;
            mp[x]--;
        }
    }
    cout << ans << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
          solve();
}