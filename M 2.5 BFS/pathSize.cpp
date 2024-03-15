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

vector<int> v[1005];
bool vis[1005];
void pathSize(int src, int des){
    queue<pair<int, int>> q;
    q.push({src, 0});
    vis[src] = true;
    bool tuki = false;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int par = p.first;
        int level = p.second;
        if (par == des){
            cout << level << endl;
            tuki = true;
        }
        for (int child : v[par]){
            if (vis[child] == false){
                q.push({child, level + 1});
                vis[child] = true;
            }
        }
    }
    if (tuki == false)
        cout << -1 << endl;

}
void solve(){
    int n, e;
    cin >> n >> e;
    while (e--){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int t;
    cin >> t;
    while(t--){
        int src,des;
        cin >> src >> des;
        memset(vis, false, sizeof(vis));
        pathSize(src,des);
    }
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
            solve();
}