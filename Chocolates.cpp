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
    int s=0;
    int val[n];
    f1(n){
        cin >> val[i];
        s+=val[i];
    }
    if(s%2==0){
        int sum=s/2;
        bool check[n+1][sum+1];
        check[0][0] = true;

        f2(1,sum+1)
            check[0][i]=false;

        f2(1,n+1){
            for(int j=0;j<=sum;j++){
                if(val[i-1]<=j){
                    check[i][j]=check[i-1][j-val[i-1]] || check[i-1][j];
                }
                else{
                    check[i][j]=check[i-1][j];
                }
            }
        }
        if(check[n][sum]) yes
        else no
    }
    else no
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}