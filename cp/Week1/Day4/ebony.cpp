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
    int a,b,c;
    cin>>a>>b>>c;
    if(a>c&&b>c){
        no
        return;
    }
    if(a==c||b==c){
        yes
        return;
    }
    if((a>c||b>c)&&(a%c==0||b%c==0)){
            yes
            return;
    }
    // else if((a>c||b>c)&&(c%a!=0||c%b!=0)){
    //         no
    //         return;
    // }
    for(int i=0;i<=c;i++){
        for(int j=0;j<=c;j++){
             if(a*i+b*j==c||a*j+b*i==c){
                yes
                return;
             }
            }
    }

    no
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
    solve();
}