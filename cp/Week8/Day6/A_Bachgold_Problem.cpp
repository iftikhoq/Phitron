#include <bits/stdc++.h>
#define ll              long long
#define yes             cout << "YES\n";
#define no              cout << "NO\n";
#define f1(n)           for(int i=0;i<n;i++)
#define f2(a,n)         for(int i=a;i<n;i++)
#define vector <int>    vi

using namespace std;
void solve(){
    int a,t;
    cin >> a;
    t=a/2;
    if(a%2==0){
        cout << t << endl;
        f1(t){
            cout << "2 ";
        }
    }
    else{
        cout << t << endl;
        f1(t-1){
            cout << "2 ";
        }
        cout << "3";
    }
}   
int main() {
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
    solve();
}