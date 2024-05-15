#include <bits/stdc++.h>
#define ll              long long
#define yes             cout << "YES\n";
#define no              cout << "NO\n";
#define f1(n)           for(ll i=0;i<n;i++)
#define f2(a,n)         for(ll i=a;i<n;i++)
#define vi              vector <int>
#define pb              push_back
#define sp              << " "
#define endl            "\n"
#define MOD             1000000007

using namespace std;
const ll sz=10e5;
ll sign[sz],speed[sz];
vi ans;
void solve(){
   ll n,k,q;
   cin >> n >> k >> q;


   f1(k) cin >> sign[i];
   f1(k) cin >> speed[i];

   double dis=sign[0],af=speed[0];
   double cs=af/dis,cc=0;
   ll spd=1;
    ans.pb(0);
    f2(1,n+1){
        if(i==sign[spd]){
            dis=sign[spd];
            af=speed[spd];
            cs=af/dis;
            cc=0;
            spd++;
        }
        cc+=cs;
        ll bu = round(cc);
        ans.pb(bu);
        cout << ans.back() << endl;
    }
    while(q--){
        ll pos;
        cin >> pos;
        cout << ans[pos]  sp;
    } 
    cout << endl;

}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}