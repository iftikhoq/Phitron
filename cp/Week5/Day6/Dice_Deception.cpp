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

   f1(n){
        cin >> arr[i];
   } 

   sort(arr,arr+n);
    ll total(0);
   f1(n){
    if(arr[i]<4 && k>0){
      if(arr[i]==1) total+=6;
      else if(arr[i]==2) total+=5;
      else if(arr[i]==3) total+=4;
        k--;
    }
    else total+=arr[i];
   }

   cout<< total << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}