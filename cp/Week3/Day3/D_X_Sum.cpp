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

int n,m;
int a[201][201];
 
int arr(int x,int y){
    int i=x,j=y;
    int al=0;
    while(i>0 && j>0){
        al+=a[i][j];
        i--;
        j--;
    }
    i=x,j=y;
    while(i>0 && j<=m){
        al+=a[i][j];
        i--;
        j++;
    }
    i=x,j=y;
    while(i<=n && j<=m){
        al+=a[i][j];
        i++;
        j++;
    }
    i=x,j=y;
    while(i<=n && j>0){
        al+=a[i][j];
        i++;
        j--;
    }
    return al;
}
 
void solve(){
    int alu=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) alu=max(alu,arr(i,j)-a[i][j]*3);
    }
    cout<<alu<<"\n";
}
   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}