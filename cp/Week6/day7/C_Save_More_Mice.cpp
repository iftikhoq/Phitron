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
    ll ar[k];
    f1(k){
        cin >> ar[i];
        ar[i]=n-ar[i];
    }
    sort(ar,ar+k);
    ll c=0,count(0);
    for(ll i=0;i<k;i++){
        if(c<n-ar[i]) count++;
        else break;
        c+=ar[i];
    }
    cout << count << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}