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
    int n,m;
    cin >> n >> m;
    int a[n],b[m];
    f1(n) cin >> a[i];
    int j=0,t=0,c=0;
    ll count = 0;
    f1(m){
        cin >> b[i];
        if(b[i]==b[i-1] && i!=0) {
            count+=c;
            continue;
        }
        else{
            j=t;
            c=0;
        }
        t=j;
        while(b[i]>=a[t] && t<n) {
            if(a[t]==b[i]) {
                count++;
                c++;
            }
            // cout <<  a[t] sp <<  b[i] << endl;
            t++;
        }
    }
        cout << count ;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
            solve();
}