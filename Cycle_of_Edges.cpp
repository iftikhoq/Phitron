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

const int N = 1e5 + 5;
int parent[N];
int grpSZ[N];

class Edge{
public:
    int u, v;
    Edge(int u, int v){
        this->u = u;
        this->v = v;
    }
};

void dsuIn(int n){
    for (int i=0;i<n;i++){
        parent[i] = -1;
        grpSZ[i] = 1;
    }
}
int dsuFind(int node){
    if (parent[node] == -1)
        return node;
    int leader = dsuFind(parent[node]);
    parent[node] = leader;
    return leader;
}
void dsuU(int node1, int node2)
{
    int a = dsuFind(node1);
    int b = dsuFind(node2);
    if (grpSZ[a] > grpSZ[b]){
        parent[b] = a;
        grpSZ[a] += grpSZ[b];
    }
    else{
        parent[a] = b;
        grpSZ[b] += grpSZ[a];
    }
}

void solve(){
    int n, e;
    cin >> n >> e;
    dsuIn(n);
    vector<Edge> edgeList;
    while (e--){
        int u, v;
        cin >> u >> v;
        edgeList.push_back(Edge(u, v));
    }
    int count = 0;
    for(Edge ed:edgeList){
        int a = dsuFind(ed.u);
        int b = dsuFind(ed.v);
        if(a==b)
            count++;
        else{
            dsuU(ed.u, ed.v);
        }
    }
    // for (int i=0;i<n;i++){
    //     cout << parent[i] << " " <<   grpSZ[i] << endl;
    // }
    cout << count << endl;
} 
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
            solve();
}