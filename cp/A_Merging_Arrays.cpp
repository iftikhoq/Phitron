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
    int n,m;
    cin >> n >> m;
    int a[n],b[m];
    f1(n) cin >> a[i];
    f1(m) cin >> b[i];
    int i=0,j=0;

    while(i<n || j<m){
        if((a[i]<=b[j] && i<n) || j>=m){
            cout << a[i] sp;
            i++;
        }
        else{
            cout << b[j] sp;
            j++;
        }
        // cout << i sp << j << endl;
    }
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
            solve();
}