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




int binarySearch(int arr[], int l, int r, int x){
    while(l<=r) {
        int m =(l+r)/2;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return l+1;
}
void solve(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    f1(n) cin >> arr[i];

    while(k--){
        int s=0,e=n-1;
        int val;
        cin >> val;
        
        cout << binarySearch(arr,s,e,val) << endl;
    }

}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
            solve();
}