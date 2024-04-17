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
    ll arr[n];
    ll res(0),mn=LLONG_MAX;

    f1(n){
        cin >> arr[i];
        res=res^arr[i];
    }
    f1(n){
        ll t = res;
        t=t^arr[i];
        mn=min(mn,t);
    }
        mn=min(mn,res);

    cout  << mn << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
          solve();
}