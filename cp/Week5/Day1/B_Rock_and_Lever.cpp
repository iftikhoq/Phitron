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
    int arr[n];

    f1(n) cin >> arr[i];
    ll count(0);
    f1(n){
        for(int j=i+1;j<n;j++){
            // cout << (arr [i]&arr[j] )<< " " << (arr[i]^arr[j]) << endl;
            if((arr[i]&arr[j])>=(arr[i]^arr[j])) count++;
        }
    } 
    cout << count << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}