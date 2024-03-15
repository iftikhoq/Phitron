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

char a[1000][1000];
bool vis[1000][1000];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
int dfs(int si, int sj, int count)
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) == true && a[ci][cj]!='-' && vis[ci][cj] == false)
        {
            count = dfs(ci, cj, count+1);
        }
    }
    return count;
}

void solve(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    
    vector <int> st;
    memset(vis, false, sizeof(vis));
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='.' && !vis[i][j]) {
                int count(1);
                count = dfs(i,j,count);
                st.pb(count);
            }
        }
    }
    sort(st.begin(),st.end());
    if(st.empty()) cout << "-1" << endl;
    else cout << st[0] << endl;
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
            solve();
}