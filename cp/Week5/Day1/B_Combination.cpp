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

bool cmp(pair<ll,ll> a,pair<ll,ll> b){
    if(a.second==b.second){
        return a.first>b.first;
    }
    else return a.second>b.second;
}
void solve(){
    int n;
    cin >> n;
    vector<pair<ll,ll>> v;
    f1(n){
        ll a,b;
        cin >> a >> b;
        v.pb({a,b});
    }
    sort(v.begin(),v.end(), cmp);
    ll point(0), count(1);
    for(auto &b : v){
       if(count==0) break;
       count+=b.second;
       point+=b.first;
       count--;
    }

    cout << point << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
            solve();
}