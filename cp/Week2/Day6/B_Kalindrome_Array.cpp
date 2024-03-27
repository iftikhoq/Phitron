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

    f1(n) {
        cin >> arr[i];
    }
    // f1(n) cout << c[i] sp;
    int f=0,l=n-1;
        bool check2=1,check1=1;

    while(f<l){
        if(arr[f]==arr[l]) {
            f++;
            l--;
            continue;
        }
        int i=0,j=n-1;
        while(i<j){
            if(arr[i]==arr[f]){
                i++;
            }
            else if(arr[j]==arr[f]){
                j--;
            }
            else if(arr[i]!=arr[j]){
                check1=0;
                break;
            }
            else{
                i++;j--;
            }
        }
        i=0,j=n-1;
        while(i<j){
            if(arr[i]==arr[l]){
                i++;
            }
            else if(arr[j]==arr[l]){
                j--;
            }
            else if(arr[i]!=arr[j]){
                check2=0;
                break;
            }
            else{
                i++;j--;
            }
        }
        break;
    }
    // cout << check1 sp << check2 << endl;
    if(check1 || check2) yes
    else no
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}