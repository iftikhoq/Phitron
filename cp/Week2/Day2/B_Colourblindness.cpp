#include <bits/stdc++.h>
#define ll              long long
#define yes             cout << "YES\n";
#define no              cout << "NO\n";
#define f1(n)           for(int i=0;i<n;i++)
#define f2(a,n)         for(int i=a;i<n;i++)
#define vector <int>    vi

using namespace std;
void solve(){
    int n;
    string s1,s2;
    cin >> n >> s1 >> s2;

    f1(n){
        if(s1[i]=='R' && s2[i]!='R'){
            cout << "NO" <<endl;
            return;
        }
        if(s1[i]!='R' && s2[i]=='R'){
            cout << "NO" <<endl;
            return;
        }
    }
    cout << "YES" << endl;
}   
int main() {
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
    solve();
}