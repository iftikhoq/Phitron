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
   vi v1(n);
   vi v2(n);

   f1(n) cin >> v1[i]; 
   f1(n) cin >> v2[i]; 

    ll dif=v1[0]-v2[0];

   f1(n){
    v1[i]=max(v1[i]-dif,0LL);
        if(v1[i]!=v2[i]){
            no
            return;
        }
   }
   yes
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}