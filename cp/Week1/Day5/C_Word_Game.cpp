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
int cal(int n){
    if(n==3) return 0;
    else if(n==2)  return 1;
    else return 3;
}
void solve(){
    unordered_map<string,int> mp;
    int n;
    cin >> n;
    string a1[n],a3[n],a2[n];

    f1(n){
        cin >> a1[i];
        mp[a1[i]]++;
    }

    f1(n){
        cin >> a2[i];
        mp[a2[i]]++;
    }

    f1(n){
        cin >> a3[i];
        mp[a3[i]]++;
    }

    int s1(0),s2(0),s3(0);

    f1(n){
        s1+=cal(mp[a1[i]]);
        s2+=cal(mp[a2[i]]);
        s3+=cal(mp[a3[i]]);
    }
    cout << s1 sp << s2 sp << s3 << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}