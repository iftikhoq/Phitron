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
    vi v;
    map <ll,ll> mp;
    f1(n){
        ll t;
        cin>> t;
        v.pb(t);
        mp[t]++;
    }
    ll pre=-1,p,count(0);
    for(auto &b : mp){
        if(b.second<pre){
            count+=pre-b.second;
        }
        pre=b.second;
    }
    count+=pre;
    cout << count << endl;

}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}