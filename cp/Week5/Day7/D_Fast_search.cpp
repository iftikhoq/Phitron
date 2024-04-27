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

ll lowerBound(ll arr[], ll l, ll r, ll x){
    while(r-l>1) {
        ll m =(l+r)/2;
        if (arr[m] <= x)
            l = m + 1;
        else
            r = m;
    }
    if(arr[l]>=x) return l;
    else return r;

}

ll higherBound(ll arr[], ll l, ll r, ll x){
    while(r-l>1) {
        ll m =(l+r)/2;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m ;
    }
    // cout << r sp << l << endl;
    if(arr[r]<=x) return r;
    else return l;
}
void solve(){
    ll n,k;
    cin >> n;
    ll arr[n];
    f1(n) cin >> arr[i];
    sort(arr,arr+n,greater<ll>());
    cin >> k;
    ll s=0,e=n-1;
    while(k--){
        ll l,r;
        cin >> l >> r;

        cout << higherBound(arr,s,e,r) sp <<lowerBound(arr,s,e,l) << endl;
    }

}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
            solve();
}