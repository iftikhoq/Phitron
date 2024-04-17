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
    ll arr[n];
    bool check=1;
    ll mn= LLONG_MAX;
    f1(n) {
        cin >> arr[i];
        mn=min(mn,arr[i]);
    }
    
    if(arr[0]!=arr[n-1]) no
    else if(mn<arr[0]  || mn<arr[n-1]) no
    else yes
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}
