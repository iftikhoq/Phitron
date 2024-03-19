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
    int arr[26]={0};
    string str;
    cin >> str;
    f1(str.size()){
        int t = str[i]-'a';
        arr[t]++;
    }
    f1(26){
        if(arr[i]==0){
            char t = i+'a';
            cout  << t << endl;
            return;
        }
    }
    cout << "None\n";
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
            solve();
}