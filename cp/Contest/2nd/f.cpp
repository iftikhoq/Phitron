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
    int arr[n];

    f1(n) cin >> arr[i];

    sort(arr,arr+n);

    if(n%2==0){
        bool check=0;
        f2(1,n/2+1){
            if(arr[i]!=arr[i-1]) check=1;
        }
        if(check){
            int i=0,j=n-1;
            while(i<=j){
                if(i==j){
                    cout << arr[i] sp;
                }
                else
                    cout << arr[i] sp << arr[j] sp ;
            i++;j--;
        }
        cout << endl;
        }
        else {
            cout << "-1\n";
        }
    }
    else{
        bool check=0;
        f2(1,n/2+2){
            if(arr[i]!=arr[i-1]) check=1;
        }
        if(check){
            int i=0,j=n-1;
            while(i<=j){
                if(i==j){
                    cout << arr[i] sp;
                }
                else
                    cout << arr[i] sp << arr[j] sp ;
            i++;j--;
        }
        cout << endl;
        }
        else {
            cout << "-1\n";
        }
    }
    
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}