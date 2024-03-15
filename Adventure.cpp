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

int knapsack(int n, int W[], int V[], int w){
    if(n==0||w==0)  return 0;
    if(W[n-1]<=w){
        int op1 = knapsack(n-1, W, V, w - W[n-1]) + V[n-1];
        int op2 = knapsack(n-1, W, V, w);
        return max(op1, op2);
    }
    else{
        int op2 = knapsack(n-1, W, V, w);
        return op2;
    }
}

void solve(){
    int n,w;
    cin >> n >> w;
    int W[n],V[n];

    f1(n) cin >> W[i];
    f1(n) cin >> V[i];

    cout << knapsack(n,W,V,w) << endl;;
}  
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
        solve();
}