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
   int n;
   cin >>  n;
   priority_queue <pair<int,int>,vector<pair<int,int>>> pq;
   f1(n){
      int t;
      cin >> t;
      pq.push({t,i});
   }
   int v1=pq.top().second;
   pq.pop();
   int v2=pq.top().second;
   if(v2<v1) swap(v1,v2);

   cout << v1 sp << v2 << endl; 
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
      solve();
}