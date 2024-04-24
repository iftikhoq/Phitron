#include <bits/stdc++.h>
#define ll              long long
#define yes             cout << "YES\n";
#define no              cout << "NO\n";
#define f1(n)           for(int i=0;i<n;i++)
#define f2(a,n)         for(int i=a;i<n;i++)
#define vi              vector <int>
#define pb              push_back
#define sp              << " " <<
#define nl              "\n"

using namespace std;
void solve(){
    int b;
    unordered_map <int,int> boys;
    cin >> b;
    while(b--) {
        int t; cin >> t;
        // cout << "b";
        boys[t]++;
    }

    int gr;
    cin >> gr;
    ll count(0);
    int arr[gr];
    f1(gr) cin >> arr[i];
    sort(arr,arr+gr);

    f1(gr){
        
        // cout << "g";
        if(boys[arr[i]-1]>0) {
            boys[arr[i]-1]--;
            count++;
            }
        else if(boys[arr[i]]>0) {
            boys[arr[i]]--;
            count++;
            }
        else if(boys[arr[i]+1]>0) {
            boys[arr[i]+1]--;
            count++;
            }
    }
    cout << count <<endl;
}   
int main() {
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
    solve();
}