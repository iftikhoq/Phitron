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
    ll arr[n];
    ll negc(0),sum(0),mn=LLONG_MAX;
    f1(n){
        cin >> arr[i];
        if(arr[i]<0) negc++;
        ll t=abs(arr[i]);
        sum+=t;
        mn=min(t,mn);
    }
    if(negc%2==0) cout << sum << endl;
    else cout << sum-2*mn << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}