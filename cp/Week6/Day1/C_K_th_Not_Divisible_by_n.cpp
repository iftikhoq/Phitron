#include <bits/stdc++.h>
#define ll              long long
#define yes             cout << "YES\n";
#define no              cout << "NO\n";
#define f1(n)           for(int i=0;i<n;i++)
#define f2(a,n)         for(int i=a;i<n;i++)
#define vi              vector <int>
#define pb              push_back
#define sp              << " " <<
#define nl              "\n"

using namespace std;
void solve(){
   ll x,y;  cin >> x >> y;

   ll z=y;

   while(z>x){
        z/=x;
        ll k = z+y%x;
        y+=z;
        z=k;
   } 

   if(y%x==0) y++;
   cout << y << endl;
}   
int main() {
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
    solve();
}