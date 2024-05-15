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
    ll arr[n];
    map<ll,ll> mp;

    f1(n){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    ll i=1,count(0);
    for(auto &b : mp){
        // cout << b.first << endl;
       while(b.second>0){
        if(b.first==i){
           i++;
         }
          else if(b.first%(b.first-i)==i){
            i++;
            count++;
          }
       }
    }
    if(i>n) cout << count << endl;
    else cout << "-1\n";
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}