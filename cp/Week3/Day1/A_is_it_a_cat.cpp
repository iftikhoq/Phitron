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

void meow(){
    int n;
    cin>>n;
    string s,s2;
    cin>>s;
    string s1="meow";
    for(int i=0; i<s.size(); i++)
    {
        if(tolower(s[i])!=tolower(s[i+1]))
            s2+=tolower(s[i]);
    }
    if(s2==s1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
    int test;
    cin >> test;
    while (test--) 
        meow();
}