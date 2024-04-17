 #include <bits/stdc++.h>
#define ll              long long
#define yes             cout << "Yes\n";
#define no              cout << "No\n";
#define f1(n)           for(int i=0;i<n;i++)
#define f2(a,n)         for(int i=a;i<n;i++)
#define vi              vector <long long>
#define pb              push_back
#define sp              << " "
#define endl            "\n"
#define MOD             1000000007

using namespace std;
void solve(){
   int n,m;
   cin >> n >> m;
   int n1=n%10,n2=(n/10)%10; 
   int m1=m%10,m2=(m/10)%10; 
    // cout << n1 sp << n2 sp << m1 sp << m2 << endl;
    int x=(n1*10)+n2;
    int y=(m1*10)+m2;
    // cout << n sp << x sp << m sp << y << endl;
   if(n>m) yes
   else if(x>y) yes
   else if(x>m) yes
   else if(n>y) yes
   else no
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
            solve();
}


