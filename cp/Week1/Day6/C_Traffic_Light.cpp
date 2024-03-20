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
    int n,t;
    char ch;
    cin >> n >> ch;
    string str;
    cin >> str;
    str+=str;
    bool check=false;
    int mx = INT_MIN;
    int cnt(0);
    for(int i=str.size()-1;i>=0;i++){
        if(str[i]=='g'){
            check = true;
        }
        else if(str[i]==ch){
            mx=max(mx,cnt);
        }
        if(check) cnt++;
    }
    cout << cnt << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}