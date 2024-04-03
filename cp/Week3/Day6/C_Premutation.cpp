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
    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            cin >> arr[i][j];
        }
    }

    int val=arr[0][0],count=1,oval;
    for(int j=1;j<n;j++){
        // cout << arr[j][0] << endl;
        if(arr[j][0]==val) count++; 
        else oval=arr[j][0];
    }
    // cout << val sp << count << endl;
    if(count==1){
        cout << oval sp;
        for(int j=0;j<n;j++){
            if(arr[j][0]==val){
                for(int i=0;i<n-1;i++){
                    cout << arr[j][i] sp;
                }
                break;
            }
        }
        cout << endl;
    }
    else{
        cout << val sp;
        for(int j=0;j<n;j++){
            if(arr[j][0]==oval){
                for(int i=0;i<n-1;i++){
                    cout << arr[j][i] sp;
                }
                break;
            }
        }
        cout << endl;
    }
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
          solve();
}