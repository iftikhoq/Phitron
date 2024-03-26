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
    sort(arr,arr+n);
    int count(1),ans(0),ev(0);
    f2(1,n){
        if(arr[i-1]==arr[i]) count++;
        else{
            if(count%2!=0) ans++;
            else ev++;
            count=1;
        }
    }
    if(count%2!=0) ans++;
            else ev++;
    cout << ans+(ev/2)*2 << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}