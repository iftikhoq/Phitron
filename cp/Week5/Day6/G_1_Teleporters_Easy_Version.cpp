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
   ll n,c;
   cin >> n >> c;

   vector <pair<ll,ll>> v;
    vi vv;
    f1(n){
        ll t;
        cin >> t;
        t+=i+1;
        vv.pb(t);
    }
    sort(vv.begin(),vv.end());
    ll count(0);
    f1(vv.size()){
        if(vv[i]>c) break;
        count++;
        c-=vv[i];
    }

    cout << count << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}