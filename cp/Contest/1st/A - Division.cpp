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
    int x;
    cin >> x;
    if(x>=1900){
        cout << "Division 1\n";
    }
    else if(x>=1600 && x<=1899){
        cout << "Division 2\n";
    }
    else if(x>=1400 && x<=1599){
        cout << "Division 3\n";
    }
    else{
        cout << "Division 4\n";
    }
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}