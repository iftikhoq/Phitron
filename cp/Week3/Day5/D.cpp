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
    string c,cn;
    cin >> c>> cn;
    ll count(0),draw(0);
    f1(n){
        if(c[i]==cn[i]) draw++;
        else if(c[i]=='R' && cn[i]=='S') count++;
        else if(c[i]=='S' && cn[i]=='P') count++;
        else if(c[i]=='P' && cn[i]=='R') count++;
    }
    n-=draw;
    n-=2*count;
    // if(n%2) cout << n/2+1-count << endl;
    // else cout << n/2-count << endl;
    if(n<0)cout << "0\n";
    else cout << n/2+1 << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
          solve();
}