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
    string str;
    cin >> n >> str;
    ll total(0);
    vector <ll> v(n,0);
    f1(n){
        ll c;
        if(str[i]=='L') c=i;
        else c=n-i-1;

        v[i]=n-1-2*c;
        total+=c;
    }
    sort(v.begin(),v.end(),greater<ll>());
    f1(n){
        if(v[i]>0)
        total+=v[i];
        cout << total sp;
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
