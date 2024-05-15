#include<bits/stdc++.h>
using namespace std;

int main()
{
       int t; cin >> t;
       while(t--){
        int a,b,c,d; cin >> a >> b >> c >> d;
        bool ans=false,ans1=false;
        if(a<b){
            for(int i=a+1;i<b;i++){
                if(i == c){
                    ans = true;
                }
                if( i == d){
                    ans1 = true;
                }
            }
        } 
       else {
            for(int i=b+1;i<a;i++){
                if(i == c){
                    ans = true;
                }
                if( i == d){
                    ans1 = true;
                }
            }
        }
        if(ans == true && ans1 == true){
            cout << "NO" << endl;
        }
        else if(ans == false && ans1 == false){
            cout << "NO" << endl;
        }else {
            cout << "YES" << endl;
        }
        
       }

return 0;
}