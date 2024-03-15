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
int si=-1;

class Node{
    public:
        int value;
        Node *next=NULL;
    Node(int val){
        value=val;
    }
};

void insert_at_head(Node *&root,int val){
    si++;
    Node *newnode = new Node(val);
    newnode->next= root;
    root = newnode;
}

void insert_at_tail(Node *&root,int val){
    si++;
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


void insert_at_middle(Node *&root,int pos,int val){
    si++;
    Node *newnode = new Node(val);
    auto tmp = root;
    f1(pos-1){
        tmp = tmp->next;
    }
    newnode->next  = tmp->next;
    tmp->next = newnode;
}

void print(Node *&root){
    auto tmp = root;
    while(tmp!=NULL){
        cout << tmp->value << " ";
        tmp=tmp->next;
    }
    cout << endl;
}

void solve(){
    Node *root = NULL;
    int v;
    while(1){
        cin >> v;
        if(v==-1) break;
        insert_at_tail(root,v);
    }
    int n;
    cin >> n;
    while(n--){
        int pos,val;
        cin >> pos >> val;
        if(pos>si+1) {
            cout << "Invalid\n";
            continue;
        }
        if(pos==0) insert_at_head(root,val);
        else if(pos==si+1) insert_at_tail(root,val);
        else insert_at_middle(root,pos, val);
        print(root);
    }
    
    
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
            solve();
}