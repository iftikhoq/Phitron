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
    int arr[n],sum(0),f=0,e=n-1;
    int c[n+1],l[n+2];
    c[0]=0;
    l[n+1]=0;
    f1(n){
        cin >> arr[i];
        // cout << arr[i] << endl;
        sum+=arr[i];
        if(arr[i]==1) c[i+1]=c[i]+1;
    }

    int count=INT_MAX;
    bool check=0;
    while(f<e){
        // cout << f  sp << e sp << sum << endl;
        if(c[n]-c[f]==n-k){
            count = min(n-f,count);
        }
        else if(c[e+1]==n-k){
            count = min(n-e+1,count);
        }
        else if(c[e+1]-c[f+1]==k){
            count = min(n-e+1+f+1,count);
        }
        else if(c[e]-c[f]==k){
            count = min(n-e+f,count);
        }
        f++;
        e--;
    }
    cout << count  << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}