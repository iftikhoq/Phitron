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
    int n;
    cin >>n;
    string str[n];
    map <string,int> mp;
    f1(n){
        cin >> str[i];
    }

    string s="";
    for(int i=n-1;i>=0;i--){
        if(mp[str[i]]==0){
            s+=str[i].substr(str[i].size()-2,2);
            mp[str[i]]++;
        }
    }
    cout << s << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
          solve();
}