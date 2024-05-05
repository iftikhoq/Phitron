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
   ll o(0),z(0);
   string str;
   cin >> str;
   f1(n){
      if(str[i]=='1') o++;
   } 
   z=n-o;

   ll move=min(z,o);
    // cout <<z sp << o sp << move << endl;
   if(move%2==0) cout << "Ramos\n";
   else cout << "Zlatan\n";
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}