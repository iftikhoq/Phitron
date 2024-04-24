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

ll LCSubStr(string s, string t, int n, int m){
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    int res = 0;
 
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (s[i - 1] == t[j - 1]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
                res=max(res,dp[i][j]);
            }
            else
                dp[i][j] = 0;
        }
    }
    return res;
}

void solve(){
   string s1,s2;
   cin >> s1 >> s2;

   ll x=s1.size();
   ll y=s2.size();
    ll siz= LCSubStr(s1,s2,x,y);

    cout << x+y-2*siz<<endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}