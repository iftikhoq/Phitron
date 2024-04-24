#include <bits/stdc++.h>
#define ll              long long
#define yes             cout << "YES\n";
#define no              cout << "NO\n";
#define f1(n)           for(int i=0;i<n;i++)
#define f2(a,n)         for(int i=a;i<n;i++)
#define vi              vector <int>
#define pb              push_back
#define sp              << " "
#define endl            "\n"
#define MOD             1000000007

using namespace std;
void solve(){
    ll x,y;
    cin >> x >> y;

    if(y==0) {
        f2(1,x+1) cout << i sp;
        cout << endl;
    }
    else if(y+2>x){
        cout << "-1\n";
    }
    else{
        cout << y+2 sp;
        f2(1,x+1) if(i!=y+2) cout << i sp;
        cout << endl;
    }
} 
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}