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
    ll x,y;
    cin >> x >> y;
    ll arr[x];
    bool check=0;
    ll mn = LLONG_MAX;
    f1(x){
        cin >> arr[i];
        if(arr[i]>=y){
            check=1;
            ll k=arr[i]%y;
            mn=min(mn,k);
        }
    }
    if(check) cout << mn << endl;
    else cout << "-1\n";
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}