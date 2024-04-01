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
     int n,k;
     cin >> n >> k;
     ll arr[n];
    unordered_map<ll,pair<ll,ll>> mp;
     f1(n) {
        cin >> arr[i];
        if(mp[arr[i]].first>0)
            mp[arr[i]].second=i+1;
        else
            mp[arr[i]].first=i+1;
            mp[arr[i]].second=0;
    }
    while(k--){
        ll x,y;
        cin >> x >> y;
        ll x1=mp[x].first,x2=mp[x].second,y1=mp[y].first,y2=mp[y].second;
        cout << x1 sp << x2 sp << y1 sp << y2 << endl;
        if(x1<=y2 && x1!=0 && y2!=0) yes
        else if(x1<=y1 && x1!=0 && y1!=0) yes
        else no
    }


}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
          solve();
}