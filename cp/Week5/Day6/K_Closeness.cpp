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
     ll n,k;
     cin >> n >> k;
     ll arr[n];

    f1(n){
        cin >> arr[i];
        arr[i]%=k;
        if(arr[i]<=k/2) arr[i]+=k;
        arr[i]+=k;
        // cout << arr[i] << " ";
    } 
    sort(arr,arr+n);
        cout << arr[n-1]-arr[0] << endl; 
   
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}