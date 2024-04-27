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
    string str;
    cin >> str;
    char s=str[0],e=str[str.size()-1];
    int dir = 1;
    if(e<s) dir = -1;
    map<char, queue <int>> mp;

    f1(str.size()){
        mp[str[i]].push(i);
    }
  
    vi ans;
    ll cost(0),tiles(0);
     
    for(char i=s;i!=e+dir;i+=dir){
        while(!mp[i].empty()){
            ans.pb(mp[i].front());
            mp[i].pop();
        }
    }

    f2(1,ans.size()){
        cost+=abs(str[ans[i]]-str[ans[i-1]]);
    }
    cout << cost sp << ans.size() << endl;
    f1(ans.size()) cout << ans[i]+1 sp;
    cout << endl; 
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}