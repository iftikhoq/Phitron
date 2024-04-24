#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main() {
   int test;
   cin >> test;
   while(test--){
   ll size;
   string n;
   cin >> size >> n;
   vector <char> v;
   for(int i=n.size()-1;i>=0;i--){
      int t;
      if(n[i]=='0'){
         i--;
         t=(int)n[i]-48;
         i--;
         t=t+((int)n[i]-48)*10;
      }
      else{
         t=(int)n[i]-48;
      }
      t+=96;
      v.pb(t);
   }
   for(int i=v.size()-1;i>=0;i--){
      cout << v[i];
   }
   cout << endl;
}
}