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
    string str;
    cin >> n >> str;
    int i;
    for(i=0;i<n-2;i++){
        if(i+2>=n) break;
        if(str[i]=='1' && (str[i+1]=='1' || str[i+2]=='1')){
            cout << "100";
            i+=3;
            break;
        }
        else cout << str[i];
    }
    for(int j=i;j<n;j++) cout << str[j];
    cout << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
          solve();
}