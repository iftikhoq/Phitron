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
    int t;
    string str;
    f1(n){
        cin >> t >> str;
        for(int j=0;j<t;j++){
            if(str[j]=='D') arr[i]++;
            else arr[i]--;
        }
        // cout << arr[i] << endl;
        if(arr[i]>9) arr[i]-=10;
        else if(arr[i]<0) arr[i]=10+arr[i];
    }
    f1(n){
        cout <<  arr[i] sp;
    }
    cout << endl;

}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}