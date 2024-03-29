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
        if(i>0) arr[i]+=arr[i-1];
   }
   f1(y){
    int a,b,c,d;
    cin >> a >> b >>c;
    ll tsum;
    if(a==1){
     tsum = (arr[x-1]-arr[b-1])+((b-a+1)*c);
    }
    else{
         tsum = (arr[x-1]-(arr[b-1]-arr[a-2]))+((b-a+1)*c);
    }
    // cout << tsum << endl;
    if(tsum%2!=0){yes;}
    else no;
   }
}    
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}