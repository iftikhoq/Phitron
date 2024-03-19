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
    ll sum(0),oc(0),mn=INT_MAX;
    ll arr[n];

    f1(n){
        cin >> arr[i];
        sum+=arr[i];
        if(arr[i]%2!=0){
            oc++;
            mn=min(mn,arr[i]);
        }
    }
    if(sum%2==0){
        cout << sum << endl;
    }
    else cout << sum-mn << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
            solve();
}