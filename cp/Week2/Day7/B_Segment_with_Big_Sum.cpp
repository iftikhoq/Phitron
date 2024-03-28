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
    ll n,s;
    cin>>n>>s;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    ll l=0,r=0,sum=0,res=INT_MAX;
    while(r<n){
        sum+=a[r];
        if(sum>=s){
            while(sum>=s){
                res=min(res,r-l+1);
                sum-=a[l];
                l++;
            }
        }
        r++;
    }
    if(res==INT_MAX) cout<<-1;
    else cout<<res;
}
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
            solve();
}