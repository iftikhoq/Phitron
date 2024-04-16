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
    ll n,x,y;
    cin >> n >> x >> y ;
    int v[n][n], v1[n][n];
    v1[0][0] =1;
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            cin >> v[i][j];
        }
    }
    for(int i=0;i<n;i++){
        if(i!=0)
            v1[i][0] = v1[i-1][0]+x;

    for(int j=1;j<n;j++){
        v1[i][j]= v[i][j-1]+y;
        }
    }
    sort(v,v+)
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
          solve();
}