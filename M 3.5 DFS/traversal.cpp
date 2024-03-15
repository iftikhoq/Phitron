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
     vector <int> tr;
     bool vis[10000];
     void dfs(int src, vector<int>adj[])
    {
        tr.push_back(src);
        vis[src] = true;
        for (int child : adj[src])
        {
            if (vis[child] == false)
                dfs(child, adj[]);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
    }  
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
}