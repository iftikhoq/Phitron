#include <bits/stdc++.h>
#define ll              long long
#define yes             cout << "YES\n";
#define no              cout << "NO\n";
#define f1(n)           for(int i=0;i<n;i++)
#define f2(a,n)         for(int i=a;i<n;i++)
#define vector <int>    vi

using namespace std;
void solve(){
    int n;
    cin >> n;
    string br;
    cin >> br;
    int fb(0),llb(0),lb(0),c(0);
    f1(n){
        if(br[i]=='('){
           fb++;
        }
        else{
            if(fb!=0){
                 fb--;
            }
            else{
                llb++;
            }
        }
        
    }
    cout << llb << endl;
}   
int main() {
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
    solve();
}