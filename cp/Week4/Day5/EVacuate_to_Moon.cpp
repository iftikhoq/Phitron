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
    int n,k,m;
    cin >> n >> k >> m;
    ll car[n], st[k];

    f1(n) cin >> car[i];
    f1(k) {
        cin >> st[i];
        st[i]*=m;
    }

    sort(car,car+n, greater<int>());
    sort(st,st+k, greater<int>());

    ll ans(0);
    for(int i=0;i<n && i<k;i++){
        // cout << car[i] sp << st[i] << endl;
        ans+=min(car[i],st[i]);
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