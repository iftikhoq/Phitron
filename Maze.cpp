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
const int sz = 10e3 + 5;
bool vis[sz][sz];
int dis[sz][sz];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m, dx, dy, rx, ry;
char maze[sz][sz];
bool valid(int i, int j){
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj){
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while(!q.empty()){
        pair<int, int> par = q.front();
        int a=par.first, b=par.second;
        q.pop();
        for(int i=0;i<4;i++){
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if(valid(ci, cj) == true && vis[ci][cj] == false && maze[ci][cj]!='#'){
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
            }
        }
    }
}
void solve(){
    cin >> n >> m;
    f1(n){
        for(int j=0;j<m;j++){
            cin >> maze[i][j];
            if(maze[i][j]=='D'){
                dx=i;
                dy=j;
            }
            if(maze[i][j]=='R'){
                rx=i;
                ry=j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    bfs(rx, ry);
    // cout << maze[dx][dy] << endl;
    while(dis[dx][dy]>1){
        if(valid(dx-1,dy) && dis[dx-1][dy]+1==dis[dx][dy]){
            dx--;
        }
        else if(valid(dx+1,dy) && dis[dx+1][dy]+1==dis[dx][dy]){
            dx++;
        }
        else if(valid(dx,dy-1) && dis[dx][dy-1]+1==dis[dx][dy]){
            dy--;
        }
        else if(valid(dx,dy+1) && dis[dx][dy+1]+1==dis[dx][dy]){
            dy++;
        }
        
        // cout << dis[dx][dy] << " " << maze[dx][dy]<< endl;
        maze[dx][dy]='X';
    }
    f1(n){
        for(int j=0;j<m;j++){
            cout <<  maze[i][j];
        }
    cout << endl;
    }

}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
            solve();
}