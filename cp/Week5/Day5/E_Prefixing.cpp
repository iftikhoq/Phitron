#include <bits/stdc++.h>
#define ll              long long
#define yes             cout << "YES\n";
#define no              cout << "NO\n";
#define f1(n)           for(int i=0;i<n;i++)
#define f2(a,n)         for(int i=a;i<n;i++)
#define vi              vector <int>
#define pb              push_back
#define sp              << " "
#define endl            "\n"
#define MOD             1000000007

using namespace std;
void solve(){
    ll n;
    cin >> n;
    vector<int> v;
    int arr[n];
    f1(n){
        cin >> arr[i];
        v.pb(arr[i]);
    }
    map <int ,int> m;
    sort(v.begin(),v.end(),greater<int>());
    vi vs;
    int s=0;
    f1(n){
        if(m[arr[i]]==0){
            vs.pb(arr[i]);
            m[arr[i]]++;
        }
        else{
            while(v[s]>=arr[i]){
                vs.pb(v[s]);
                s++;
                m[v[s]]++;
            }
            // vs.pop_back();
    }
} 
    for(auto &qq : vs) cout << qq sp;
    cout << endl;
}
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}