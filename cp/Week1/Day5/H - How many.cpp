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
    int n,s;
    cin >> n >> s;
    ll  cnt(0);
    for(int i=0;i<=n;i++){
        for(int j=0;i+j<=n;j++){
            for(int k=0;i+j+k<=n;k++){
                if(i*j*k<=s) cnt++;
            }
        }
    }
    cout << cnt << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
            solve();
}