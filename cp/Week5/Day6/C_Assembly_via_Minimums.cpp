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
    ll n;
    cin >> n;
    ll m=(n*(n-1))/2;
    int arr[m];
    f1(m) cin >> arr[i];
    sort(arr,arr+m);
    int i=0;
    n--;
    while(i<m){
        cout << arr[i] sp;
        i+=n;
        n--;
    }
    cout << arr[m-1];
    cout <<  endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}