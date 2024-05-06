#include <bits/stdc++.h>
#define ll              long long
#define yes             cout << "YES\n";
#define no              cout << "NO\n";
#define f1(n)           for(int i=0;i<n;i++)
#define f2(a,n)         for(int i=a;i<n;i++)
#define vi              vector <long long>
#define pb              push_back
#define sp              << " " <<
#define nl              "\n"
#define MOD             1000000007

using namespace std;
void solve(){
    int n,q,t;
    cin >> n >> q;
    set <int> st;
    int arr[n],brr[q];

    f1(n) {
        cin >> arr[i];
    }
    f1(q) {
        cin >> brr[i];
    }

    f1(q){
        if(st.find(brr[i])!=st.end()) continue;
        st.insert(brr[i]);
        for(int j=0;j<n;j++){
            if(arr[j]%(1<<brr[i])==0){
                arr[j]+=(1<<(brr[i]-1));
            }
        }
    }

    f1(n) cout <<  arr[i] << " ";
    cout << endl;


}   
int main() {
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
    solve();
}