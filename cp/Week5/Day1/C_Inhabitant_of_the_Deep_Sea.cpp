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
    int n,k;
    cin >> n >> k;
    int arr[n];
    f1(n) cin >> arr[i];
    ll count(0);
    sort(arr,arr+n);
    f1(n-1){
        cout << arr[i]<< ": ";
        if(arr[i]*2<=k){
            arr[i+1]-=arr[i];
            k-=arr[i]*2;
            count++;
            cout << arr[i+1] << endl;
        }
        else break;
    } 
    cout << arr[n-1] sp << k << endl;
    if(arr[n-1]<=k) count++;
    cout << count << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}