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
    unsigned long long suf[n+1],pre[n+1];
    suf[0]=0;
    pre[0]=0;
    f1(n) cin >> arr[i];
    ll mid=k/2;
    ll lb1=0,lb2=0,count,sum(0);
    f1(n){
        suf[i+1]=suf[i]+arr[i];
        pre[i+1]=pre[i]+arr[n-i-1];
        if(suf[i+1]<=k-mid) lb1=i+1;
        if(pre[i+1]<=mid) lb2=i+1;
        sum+=arr[i];
    }

    // f1(n) cout << suf[i+1] sp;
    // cout << endl;
    // f1(n) cout << pre[i+1] sp;
    // cout << endl;
    if(lb1+lb2>n || sum<=k){
        count=n;
    }
    else{
        count = lb1+lb2;
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