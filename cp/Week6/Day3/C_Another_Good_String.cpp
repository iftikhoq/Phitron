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
   ll n,q;
   cin >> n >> q;
   string str;
   cin >> str;
   ll mx=LLONG_MIN,c=1;
   f2(1,n){
      if(str[i]==str[i-1]) c++;
      else {
        c=1;
      }
    mx=max(mx,c);
   } 
    cout << mx sp;
   while(q--){
    char ch;
    cin >> ch;
    ll sz=str.size()-1;
    
    if(ch==str[sz]) c++;
    else{
        c=1;
    }
    mx=max(mx,c);
    // cout << ch sp << str[sz] sp << c << endl;
    cout << mx sp;
    str.pb(ch);
   }
  cout << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}