#include <bits/stdc++.h>
#define ll              long long
#define yes             cout << "Yes\n";
#define no              cout << "No\n";
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
    ll arr[n];
    f1(n) cin >> arr[i];

    bool o=1,e=1;
    ll mx=LLONG_MIN;
    f1(n-2){
        if(arr[i]>arr[i+1] && arr[i]> arr[i+2]){
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