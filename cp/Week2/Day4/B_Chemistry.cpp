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
        int n,k,tnt=0;
        cin>>n>>k;
        string str;
        cin>>str;
        map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[str[i]]++;
        }

        for(auto x:mp){
            if(x.second%2) tnt++;
        }
        tnt--;
        if(tnt<=k)  cout<<"YES\n";
        else cout<<"NO\n";
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
            solve();
}