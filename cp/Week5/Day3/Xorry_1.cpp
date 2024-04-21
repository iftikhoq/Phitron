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
   ll k = log2(n);
//    cout << k << endl;
   ll y=0;
   for(ll i=k-1;i>=0;i--){
        if((1<<i)&n){
            y|=(1<<i);
        }
   }
   ll p=pow(2,k);
   cout << y << " " << p << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}