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
    cin >> n;
    int arr[n];
    unordered_map<int,int> mp;
    f1(n){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    sort(arr,arr+n);
    
    ll ans(0);
    f1(n){
        int val = arr[i];
        if(mp[arr[i]]!=0){
            ans++;
            while(mp[val]!=0){
                mp[val]--;
                val++;
            }
        }
    }
    cout << ans << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
          solve();
}