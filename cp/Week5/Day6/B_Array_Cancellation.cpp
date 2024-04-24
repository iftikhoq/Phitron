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

     ll total(0),cost(0);
     f1(n){
        ll q;
        cin >> q;
        if(q>0) total+=q;
        else{
            total+=q;
            if(total<0){
                cost+=abs(total);
                total=0;
            }
        }
     } 
     cout << cost << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}