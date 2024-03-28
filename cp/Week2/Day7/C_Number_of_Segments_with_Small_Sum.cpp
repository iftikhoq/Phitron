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
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    vi arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];

    ll l=0,r=0,sum=0,ans=0;
    while(r<n){
        sum+=arr[r];
        if(sum<=k){
            ans+=r-l+1;
        }
        else{
            while (sum>k){
                sum-=arr[l];
                l++;
            }
            if(sum<=k){
                ans += r - l + 1;
            }
        }
        r++;
    }
    cout << ans;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
            solve();
}