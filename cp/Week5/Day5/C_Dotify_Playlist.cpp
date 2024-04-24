#include <bits/stdc++.h>
#define ll              long long
#define yes             cout << "YES\n";
#define no              cout << "NO\n";
#define f1(n)           for(int i=0;i<n;i++)
#define f2(a,n)         for(int i=a;i<n;i++)
#define vi              vector <int>
#define pb              push_back
#define sp              << " "
#define endl            "\n"
#define MOD             1000000007

using namespace std;
void solve(){
    ll x,y,z;
    cin >> x >> y >> z;

    vi v;
    
    while(x--){
        ll t,p;
        cin >> t >> p;
        if(p==z){
            v.pb(t);
        }
    }
    if(v.size()<y) {
        cout << "-1\n";
        return;
    }
    sort(v.begin(),v.end(),greater<int>());
    ll count(0);

    for(int i=0;i<y;i++){
        count+=v[i];
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