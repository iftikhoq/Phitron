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

class Node{
    public:
        int value;
        Node *next=NULL;
    Node(int val){
        value=val;
    }
};

void insert_at_tail(Node *&root,int val){
    Node *newnode = new Node(val);
    if(root==NULL){
        root = newnode;
        return;
    }
    auto tmp = root;
    while(tmp->next!=NULL)
        tmp = tmp->next;

    tmp->next = newnode;
} 

bool findDuplicate(Node *&root){
    int arr[101]={0};
    auto tmp = root;
    while(tmp!=NULL){
        if(arr[tmp->value]==0)arr[tmp->value]++;
        else return 1;
        tmp = tmp->next;
    }
    return 0;
}

void solve(){
    Node *root = NULL;
    int v;
    while(1){
        cin >> v;
        if(v==-1) break;
        insert_at_tail(root,v);
    }
    if(findDuplicate(root)){
        yes
    }
    else{
        no
    }
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
            solve();
}