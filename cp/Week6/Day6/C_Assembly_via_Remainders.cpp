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
   n--;
   ll arr[n];
    cout << 1000 sp;
   ll x = 1000;

   f1(n){
        cin >> arr[i];
        // cout << arr[i] << endl;
        cout << x+arr[i] sp;
        x+=arr[i];
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