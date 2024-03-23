#include <bits/stdc++.h>
using namespace std;
int main() {
    string x,T="Timur";
    int q,t,k,c,u;
    cin >> u;
    for(int w=0;w<u;w++){
    cin >> c >> x;
    if(c>5){
        cout << "NO" << endl;
    }
    else{
    int r=1,k=0;
    while(r!=0){
        for(int i=0;i<c;i++){
            if(x[i]==T[k]){
                k++;
                r=1;
                break;
            }
            r=0;
        }
    }
    if(T[k]=='\0'){
        cout << "YES" <<endl;
    }
    else{
        cout << "NO" <<endl;
    }
    }
}
}