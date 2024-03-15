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

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty()){
        int par = q.front();
        q.pop();
        cout << par << endl;
        for (int child : v[par]){
            if (vis[child] == false){
                q.push(child);
                vis[child] = true;
            }
        }
    }
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
    int src;
    cin >> src;
    memset(vis, false, sizeof(vis));
    bfs(src);
}
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
            solve();
}