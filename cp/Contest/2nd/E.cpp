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
    ll x,y;
    cin >> x >> y;
    int arr[x];
    ll sum(0);
    f1(x){
        cin >> arr[i];
        sum+=arr[i];
    }
    if(sum/x<1){
        no
    }
    else if(sum%x!=0 && y==0){
        no
    }
    else{
        yes
    }
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}