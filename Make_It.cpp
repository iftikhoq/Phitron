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
const ll N = 100000;
bool check[N];
void tar(ll s){
    if(s>=N || check[s]) return;
    check[s] = 1;
    tar(s*2);
    tar(s+3);
}
  
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    tar(1);

    while (test--){
        int n;
        cin >> n;
        if(check[n]) yes
        else no
    }
}