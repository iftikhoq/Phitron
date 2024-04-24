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
    ll om(0),ad(0),x(0),y(0);

    f1(n){
        ll t;
        cin >> t;
        if(t!=0) x++;
        else{
            om=max(x,om);
            x=0;
        }
    }
    om=max(x,om);
    f1(n){
        ll t;
        cin >> t;
        if(t!=0) y++;
        else{
            ad=max(y,ad);
            y=0;
        }
    }
    ad=max(y,ad);
    if(om==ad) cout << "Draw\n";
    else if(om>ad) cout << "Om\n";
    else cout << "Addy\n";
} 
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}