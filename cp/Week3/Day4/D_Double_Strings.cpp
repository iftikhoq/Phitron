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
   cin >> n;
   string str[n];
   unordered_map<string,int>mp;
   f1(n){
        cin >> str[i];
        mp[str[i]]++;
   } 

    f1(n){
        bool check =0;
        for(int j=0;j<str[i].size();j++){
            string s1=str[i].substr(0,j+1);
            string s2=str[i].substr(j+1,str[i].size()-j-1);
            if(mp[s1]>0 && mp[s2]>0) check=1;
        }
        if(check) cout << "1";
        else cout << "0";
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